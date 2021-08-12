#include <algorithm>
#include <array>
#include <mutex>
#include <numbers>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <vector>

#include "../imgui/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../imgui/imgui_internal.h"
#include "../imgui/imgui_stdlib.h"

#include "../ConfigStructs.h"
#include "../InputUtil.h"
#include "../Interfaces.h"
#include "../Memory.h"

#include "../Hacks/EnginePrediction.h"
#include "../Hacks/Misc.h"

#include "../SDK/ConVar.h"
#include "../SDK/Cvar.h"
#include "../SDK/Engine.h"
#include "../SDK/Surface.h"
#include "../SDK/EngineTrace.h"
#include "../SDK/Entity.h"
#include "../SDK/EntityList.h"
#include "../SDK/Localize.h"
#include "../SDK/LocalPlayer.h"
#include "../SDK/NetworkChannel.h"
#include "../SDK/Panorama.h"
#include "../SDK/UtlVector.h"
#include "../SDK/Vector.h"
#include "../SDK/WeaponData.h"
#include "../SDK/WeaponId.h"
#include "../SDK/WeaponSystem.h"


#include "../GUI.h"
#include "../Helpers.h"
#include "../Hooks.h"
#include "../GameData.h"
#include "../GrenadeData.h"
#include "../Config.h"

#include <Hacks/Misc.cpp>

void Misc::MollyHelper(ImDrawList* drawList)
{
    if (!localPlayer || !localPlayer->isAlive() || !miscConfig.mollyHelper)
        return;

    if (interfaces->engine->isConsoleVisible())
        return;

    if (!can_shoot())
        return;

    if (strstr(interfaces->engine->getLevelName(), "mirage"))
    {
        if (localPlayer->getActiveWeapon()->isMolotov()) {
            
            for (const auto& it : MirageMolly)
            {

                if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
                    continue;

                const ImVec2 size = ImGui::CalcTextSize(it.info.c_str());
                const float radius = 1.0;

                const Vector ring_target = { radius * cosf(0) + it.ang.x, radius * sinf(0) + it.ang.y, (it.ang.z) };

                ImVec2 ring_target_angle;

                const Vector ring_ground = { radius * cosf(0) + it.pos.x, radius * sinf(0) + it.pos.y, it.pos.z }; // -60 compensation for player height
                ImVec2 ring_ground_angle;

                const bool in_pos = (round(localPlayer->getEyePosition().x) - round(it.pos.x) <= it.ring_width && round(localPlayer->getEyePosition().y) - round(it.pos.y) <= it.ring_width);

                int xx, yy;
                interfaces->engine->getScreenSize(xx, yy);

                int cy = yy / 2;
                int cx = xx / 2;

                if (worldToScreen(ring_target, ring_target_angle))
                {
                    // target
                    //bool in_angle = (round(interfaces->engine->getViewAngles().x) == round(it.ang.x) && round(interfaces->engine->getViewAngles().y) == round(it.ang.y));
                    bool in_angle = true;
                    drawList->AddRectFilled(ImVec2(ring_target_angle.x - 10.f, ring_target_angle.y - 10.f), ImVec2(ring_target_angle.x + size.x + 25.f, ring_target_angle.y + 26.f), IM_COL32(0, 0, 0, 80), 10.f);
                    drawList->AddCircleFilled(ring_target_angle, 8.f, IM_COL32(255, 255, 255, 100));
                    drawList->AddText(ImVec2(ring_target_angle.x + 12.f, ring_target_angle.y - 7.f), IM_COL32(0, 0, 0, 255), it.info.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 13.f, ring_target_angle.y - 8.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 12.f, ring_target_angle.y - -7.f), IM_COL32(0, 0, 0, 255), it.type.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 13.f, ring_target_angle.y - -8.f), IM_COL32(255, 255, 255, 255), it.type.c_str());
                    drawList->AddCircle(ImVec2(cx, cy), 10.f, IM_COL32(255, 0, 0, 255));

                    Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 0, 0, 250));

                    if (in_pos)
                        drawList->AddLine(ImGui::GetIO().DisplaySize / 2.0f, ring_target_angle, IM_COL32(0, 0, 0, 255), 2.f);
                }
                else if (worldToScreen(ring_ground, ring_ground_angle))
                {
                    //ground
                    drawList->AddCircleFilled(ring_ground_angle, 8.f, IM_COL32(255, 0, 0, 80));
                    Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 0, 0, 250));
                    drawList->AddText(ImVec2(ring_ground_angle.x + 13.f, ring_ground_angle.y - 8.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
                }

            }
        }
        else if (localPlayer->getActiveWeapon()->isIncGrenade()) {
            
            for (const auto& it : MirageMolly)
            {

                if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
                    continue;

                const ImVec2 size = ImGui::CalcTextSize(it.info.c_str());
                const float radius = 1.0;

                const Vector ring_target = { radius * cosf(0) + it.ang.x, radius * sinf(0) + it.ang.y, (it.ang.z) };

                ImVec2 ring_target_angle;

                const Vector ring_ground = { radius * cosf(0) + it.pos.x, radius * sinf(0) + it.pos.y, it.pos.z }; // -60 compensation for player height
                ImVec2 ring_ground_angle;

                const bool in_pos = (round(localPlayer->getEyePosition().x) - round(it.pos.x) <= it.ring_width && round(localPlayer->getEyePosition().y) - round(it.pos.y) <= it.ring_width);

                int xx, yy;
                interfaces->engine->getScreenSize(xx, yy);

                int cy = yy / 2;
                int cx = xx / 2;

                if (worldToScreen(ring_target, ring_target_angle))
                {
                    // target
                    //bool in_angle = (round(interfaces->engine->getViewAngles().x) == round(it.ang.x) && round(interfaces->engine->getViewAngles().y) == round(it.ang.y));
                    bool in_angle = true;
                    drawList->AddRectFilled(ImVec2(ring_target_angle.x - 10.f, ring_target_angle.y - 10.f), ImVec2(ring_target_angle.x + size.x + 25.f, ring_target_angle.y + 26.f), IM_COL32(0, 0, 0, 80), 10.f);
                    drawList->AddCircleFilled(ring_target_angle, 8.f, IM_COL32(255, 255, 255, 100));
                    drawList->AddText(ImVec2(ring_target_angle.x + 12.f, ring_target_angle.y - 7.f), IM_COL32(0, 0, 0, 255), it.info.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 13.f, ring_target_angle.y - 8.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 12.f, ring_target_angle.y - -7.f), IM_COL32(0, 0, 0, 255), it.type.c_str());
                    drawList->AddText(ImVec2(ring_target_angle.x + 13.f, ring_target_angle.y - -8.f), IM_COL32(255, 255, 255, 255), it.type.c_str());
                    drawList->AddCircle(ImVec2(cx, cy), 10.f, IM_COL32(255, 0, 0, 255));

                    Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 0, 0, 250));

                    if (in_pos)
                        drawList->AddLine(ImGui::GetIO().DisplaySize / 2.0f, ring_target_angle, IM_COL32(0, 0, 0, 255), 2.f);
                }
                else if (worldToScreen(ring_ground, ring_ground_angle))
                {
                    //ground
                    drawList->AddCircleFilled(ring_ground_angle, 8.f, IM_COL32(255, 0, 0, 80));
                    Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 0, 0, 250));
                    drawList->AddText(ImVec2(ring_ground_angle.x + 13.f, ring_ground_angle.y - 8.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
                }

            }
        }
    }
}