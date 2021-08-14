#include <algorithm>
#include <array>

#include <fstream>
#include <iterator>
#include <string>

#include <unordered_map>
#include <vector>

#ifdef _WIN32
#include <ShlObj.h>
#include <Windows.h>
#endif

#include "imgui/imgui.h"
#include "imgui/imgui_stdlib.h"

#include "imguiCustom.h"
#include "Hooks.h"
#include "Protobuffs.h"
#include "ProfileChanger.h"

#include "GUI.h"
#include "Config.h"
#include "ConfigStructs.h"
#include "Hacks/Misc.h"
#include "InventoryChanger/InventoryChanger.h"
#include "Helpers.h"
#include "Interfaces.h"
#include "SDK/InputSystem.h"
#include "Hacks/Visuals.h"
#include "Hacks/Glow.h"
#include "Hacks/AntiAim.h"
#include "Hacks/Backtrack.h"
#include "Hacks/Sound.h"
#include "Hacks/StreamProofESP.h"


bool Inventory::Presend(uint32_t& unMsgType, void* pubData, uint32_t& cubData)
{
	uint32_t MessageType = unMsgType & 0x7FFFFFFF;

	if (MessageType == k_EMsgGCAdjustItemEquippedState) {

		ProtoWriter msg((void*)((DWORD)pubData + 8), cubData - 8, 19);

		if (!msg.has(CMsgAdjustItemEquippedState::item_id)
			|| !msg.has(CMsgAdjustItemEquippedState::new_class)
			|| !msg.has(CMsgAdjustItemEquippedState::new_slot))
			return true;

		uint32_t item_id = msg.get(CMsgAdjustItemEquippedState::item_id).UInt32();
		uint32_t new_class = msg.get(CMsgAdjustItemEquippedState::new_class).UInt32();

		memory->clientState->ForceFullUpdate();

		//return false;
	}
	return true;
}

static bool profileWindowOpen = false;

void ProfileChanger::menuBarItem() noexcept
{
    if (ImGui::MenuItem("Profile Changer")) {
        profileWindowOpen = true;
        ImGui::SetWindowFocus("Profile Changer");
        ImGui::SetWindowPos("Profile Changer", { 100.0f, 100.0f });
    }
}

void ProfileChanger::tabItem() noexcept
{
    if (ImGui::BeginTabItem("Profile Changer")) {
        drawGUI(true);
        ImGui::EndTabItem();
    }
}

void ProfileChanger::drawGUI(bool contentOnly) noexcept
{
    if (!contentOnly) {
        if (!profileWindowOpen)
            return;
        ImGui::SetNextWindowSize({ 290.0f, 0.0f });
        ImGui::Begin("Rank Changer", &profileWindowOpen, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
    }

    static const char* bans_gui[] =
    {
        "Off",
        "You were kicked from the last match (competitive cooldown)",
        "You killed too many teammates (competitive cooldown)",
        "You killed a teammate at round start (competitive cooldown)",
        "You failed to reconnect to the last match (competitive cooldown)",
        "You abandoned the last match (competitive cooldown)",
        "You did too much damage to your teammates (competitive cooldown)",
        "You did too much damage to your teammates at round start (competitive cooldown)",
        "This account is permanently untrusted (global cooldown)",
        "You were kicked from too many recent matches (competitive cooldown)",
        "Convicted by overwatch - majorly disruptive (global cooldown)",
        "Convicted by overwatch - minorly disruptive (global cooldown)",
        "Resolving matchmaking state for your account (temporary cooldown)",
        "Resolving matchmaking state after the last match (temporary cooldown)",
        "This account is permanently untrusted (global cooldown)",
        "(global cooldown)",
        "You failed to connect by match start. (competitive cooldown)",
        "You have kicked too many teammates in recent matches (competitive cooldown)",
        "Congratulations on your recent competitive wins! before you play competitive matches further please wait for matchmaking servers to calibrate your skill group placement based on your lastest performance. (temporary cooldown)",
        "A server using your game server login token has been banned. your account is now permanently banned from operating game servers, and you have a cooldown from connecting to game servers. (global cooldown)"
    };
    const char* ranks_gui[] = {
        "Off",
        "Silver 1",
        "Silver 2",
        "Silver 3",
        "Silver 4",
        "Silver Elite",
        "Silver Elite Master",
        "Gold Nova 1",
        "Gold Nova 2",
        "Gold Nova 3",
        "Gold Nova Master",
        "Master Guardian 1",
        "Master Guardian 2",
        "Master Guardian elite",
        "Distinguished Master Guardian",
        "Legendary Eagle",
        "Legendary Eagle master",
        "Supreme Master First Class",
        "The Global Elite"
    };
    ImGui::Columns(2, nullptr, false);
    ImGui::Checkbox("Enabled (May make MM times longer)##profile", &profileChanger.enabled);
    ImGui::Text("Rank");
    ImGui::Combo("##Rank", &profileChanger.rank, ranks_gui, ARRAYSIZE(ranks_gui));
    ImGui::Text("Level");
    ImGui::SliderInt("##Level", &profileChanger.level, 0, 40);
    ImGui::Text("XP");
    ImGui::InputInt("##Xp##level", &profileChanger.exp);
    ImGui::Text("Wins");
    ImGui::InputInt("##Wins", &profileChanger.wins);
    if (ImGui::Button("Apply", ImVec2(190, 30)))
    {
        write.SendClientHello();
        write.SendMatchmakingClient2GCHello();
    }
    ImGui::NextColumn();
    ImGui::Text("Friend");
    ImGui::InputInt("##Friend", &profileChanger.friendly);
    ImGui::Text("Teach");
    ImGui::InputInt("##Teach", &profileChanger.teach);
    ImGui::Text("Leader");
    ImGui::InputInt("##Leader", &profileChanger.leader);
    ImGui::Text("Fake ban type");
    ImGui::Combo("##fake-ban", &profileChanger.ban_type, bans_gui, IM_ARRAYSIZE(bans_gui));
    ImGui::Text("Fake ban time");
    ImGui::SliderInt("##fake-ban-time", &profileChanger.ban_time, 0, 1000, "Seconds: %d");
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + (250 / 2) - (190 / 2) - 20.f);

    if (!contentOnly)
        ImGui::End();
}

static void from_json(const json& j, ProfileChanger::ProfileChanger& pC)
{  // read(j, "", pC.);
    read(j, "Enabled (May make MM times longer)##profile", pC.enabled);
    read(j, "Rank", pC.rank);
    read(j, "Level", pC.level);
    read<value_t::string>(j, "##Xp##level", pC.exp);
    read<value_t::string>(j, "##Wins", pC.wins);
    read<value_t::string>(j, "##Friend", pC.friendly);
    read<value_t::string>(j, "##Teach", pC.teach);
    read<value_t::string>(j, "##Leader", pC.leader);
    read(j, "##fake-ban", pC.ban_type);
    read(j, "##fake-ban-time", pC.ban_time);
}

static void to_json(json& j, const ProfileChanger::ProfileChanger& o)
{
    const ProfileChanger::ProfileChanger dummy;

    WRITE("Enabled (May make MM times longer)##profile", enabled);
    WRITE("Rank", rank);
    WRITE("Level", level);
    WRITE("##Xp##level", exp);
    WRITE("##Wins", wins);
    WRITE("##Friend", friendly);
    WRITE("##Teach", teach);
    WRITE("##Leader", leader);
    WRITE("##fake-ban", ban_type);
    WRITE("##fake-ban-time", ban_time);
}
