#include <cmath>
#include <span>
#include <vector>

#include "../SDK/ItemSchema.h"

#include "../Helpers.h"
#include "../InventoryChanger/Inventory.h"
#include "ItemGenerator.h"

static float generateWear() noexcept
{
    float wear;
    if (const auto condition = Helpers::random(1, 10000); condition <= 1471)
        wear = Helpers::random(0.0f, 0.07f);
    else if (condition <= 3939)
        wear = Helpers::random(0.07f, 0.15f);
    else if (condition <= 8257)
        wear = Helpers::random(0.15f, 0.38f);
    else if (condition <= 9049)
        wear = Helpers::random(0.38f, 0.45f);
    else
        wear = Helpers::random(0.45f, 1.0f);
    return wear;
}

std::pair<std::size_t, std::size_t> ItemGenerator::generateItemFromContainer(const StaticData::Case& caseData) noexcept
{
    assert(caseData.hasLoot());

    const auto unlockedItemIdx = StaticData::caseLoot()[Helpers::random(static_cast<int>(caseData.lootBeginIdx), static_cast<int>(caseData.lootEndIdx - 1))];
    std::size_t dynamicDataIdx = Inventory::INVALID_DYNAMIC_DATA_IDX;

    if (const auto& item = StaticData::gameItems()[unlockedItemIdx]; caseData.willProduceStatTrak && item.isMusic()) {
        DynamicMusicData dynamicData;
        dynamicData.statTrak = 0;
        dynamicDataIdx = Inventory::emplaceDynamicData(std::move(dynamicData));
    }
    else if (item.isSkin()) {
        DynamicSkinData dynamicData;
        const auto& staticData = StaticData::paintKits()[item.dataIndex];
        dynamicData.wear = std::lerp(staticData.wearRemapMin, staticData.wearRemapMax, generateWear());
        dynamicData.seed = Helpers::random(1, 1000);

        if (caseData.isSouvenirPackage())
            dynamicData.tournamentID = caseData.souvenirPackageTournamentID;
        else if (Helpers::random(0, 9) == 0)
            dynamicData.statTrak = 0;

        dynamicDataIdx = Inventory::emplaceDynamicData(std::move(dynamicData));
    }

    return std::make_pair(unlockedItemIdx, dynamicDataIdx);
}

using StaticData::TournamentMap;

struct Match {
    TournamentMap map;
    TournamentStage stage;
    TournamentTeam team1;
    TournamentTeam team2;
    std::vector<int> mvpPlayersIDs;
};

struct Tournament {
    std::uint32_t tournamentID;
    const std::vector<Match>& matches;
};

static const std::vector<Match> emsOneKatowice2014Matches{
    { TournamentMap::Dust2, TournamentStage::GroupStage, TournamentTeam::Titan, TournamentTeam::Mousesports, {} }
};

constexpr auto tournaments = std::to_array<Tournament>({
    { 3, emsOneKatowice2014Matches }
});

static_assert(std::ranges::is_sorted(tournaments, {}, & Tournament::tournamentID));

[[nodiscard]] static const std::vector<Match>* getTournamentMatches(std::uint32_t tournamentID) noexcept
{
    if (const auto it = std::ranges::lower_bound(tournaments, tournamentID, {}, &Tournament::tournamentID); it != tournaments.end())
        return &it->matches;
    assert(false && "Missing tournament match data!");
    return nullptr;
}

[[nodiscard]] static std::span<const Match> filterMatchesToMap(const std::vector<Match>& matches, TournamentMap map) noexcept
{
    if (map == TournamentMap::None)
        return matches;

    struct Comp {
        bool operator()(TournamentMap map, const Match& match) const noexcept { return map < match.map; }
        bool operator()(const Match& match, TournamentMap map) const noexcept { return match.map < map; }
    };

    // not using std::ranges::equal_range() here because it requires extra operators
    if (const auto [begin, end] = std::equal_range(matches.begin(), matches.end(), map, Comp{}); begin != end)
        return { begin, end };
    return {};
}

[[nodiscard]] static auto generateSouvenirPackageData(const StaticData::Case& caseData) noexcept
{
    assert(caseData.isSouvenirPackage());
    DynamicSouvenirPackageData dynamicData;

    if (const auto matches = getTournamentMatches(caseData.souvenirPackageTournamentID)) {
        if (const auto matchesOnMap = filterMatchesToMap(*matches, caseData.tournamentMap); !matchesOnMap.empty()) {
            const auto& randomMatch = matchesOnMap[Helpers::random(0, matchesOnMap.size() - 1)];
            dynamicData.tournamentStage = randomMatch.stage;
            dynamicData.tournamentTeam1 = randomMatch.team1;
            dynamicData.tournamentTeam2 = randomMatch.team2;
        }
    }

    return dynamicData;
}

std::size_t ItemGenerator::createDefaultDynamicData(std::size_t gameItemIndex) noexcept
{
    std::size_t index = Inventory::INVALID_DYNAMIC_DATA_IDX;

    if (const auto& item = StaticData::gameItems()[gameItemIndex]; item.isSkin()) {
        const auto& staticData = StaticData::paintKits()[item.dataIndex];
        DynamicSkinData dynamicData;
        dynamicData.wear = std::lerp(staticData.wearRemapMin, staticData.wearRemapMax, Helpers::random(0.0f, 0.07f));
        dynamicData.seed = Helpers::random(1, 1000);
        index = Inventory::emplaceDynamicData(std::move(dynamicData));
    }
    else if (item.isGlove()) {
        const auto& staticData = StaticData::paintKits()[item.dataIndex];
        DynamicGloveData dynamicData;
        dynamicData.wear = std::lerp(staticData.wearRemapMin, staticData.wearRemapMax, Helpers::random(0.0f, 0.07f));
        dynamicData.seed = Helpers::random(1, 1000);
        index = Inventory::emplaceDynamicData(std::move(dynamicData));
    }
    else if (item.isAgent()) {
        index = Inventory::emplaceDynamicData(DynamicAgentData{});
    }
    else if (item.isMusic()) {
        index = Inventory::emplaceDynamicData(DynamicMusicData{});
    }
    else if (item.isCase()) {
        if (const auto& staticData = StaticData::cases()[item.dataIndex]; staticData.isSouvenirPackage())
            index = Inventory::emplaceDynamicData(generateSouvenirPackageData(staticData));
    }
    
    return index;
}