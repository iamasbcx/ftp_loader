#include <algorithm>
#include <array>
#include <mutex>
#include <numbers>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <vector>

#include "../imgui/imgui.h"

#include "../imgui/imgui_internal.h"
#include "../imgui/imgui_stdlib.h"

#include "../ConfigStructs.h"
#include "../InputUtil.h"
#include "../Interfaces.h"
#include "../Memory.h"

#include "../Hacks/EnginePrediction.h"
#include "../Hacks/Misc.h"

#include "../SDK/ClassId.h"
#include "../SDK/Client.h"
#include "../SDK/ClientClass.h"
#include "../SDK/ClientMode.h"
#include "../SDK/ConVar.h"
#include "../SDK/Cvar.h"
#include "../SDK/Engine.h"
#include "../SDK/EngineTrace.h"
#include "../SDK/Entity.h"
#include "../SDK/EntityList.h"
#include "../SDK/FrameStage.h"
#include "../SDK/GameEvent.h"
#include "../SDK/GlobalVars.h"
#include "../SDK/ItemSchema.h"
#include "../SDK/Localize.h"
#include "../SDK/LocalPlayer.h"
#include "../SDK/NetworkChannel.h"
#include "../SDK/Panorama.h"
#include "../SDK/Platform.h"
#include "../SDK/UserCmd.h"
#include "../SDK/UtlVector.h"
#include "../SDK/Vector.h"
#include "../SDK/WeaponData.h"
#include "../SDK/WeaponId.h"
#include "../SDK/WeaponSystem.h"


#include "../GUI.h"
#include "../Helpers.h"
#include "../Hooks.h"
#include "../GameData.h"

#include "../imguiCustom.h"
#include <Hacks/Misc.cpp>

#include <map>

std::map<std::string, std::vector<grenade_data_t>> data =
{
	{ "mirage", grenade_data_mirage },
	{ "inferno", grenade_data_inferno },
	{ "dust2", grenade_data_dust2 },
	{ "nuke", grenade_data_nuke },
	{ "overpass", grenade_data_overpass },
	{ "train", grenade_data_train },
	{ "cache", grenade_data_cache },
	{ "cbble", grenade_data_cobblestone }
};


ImDrawList* drawList;



Vector CalcHelpPos(Vector target)
{
	Entity* plocal = (Entity*)interfaces->entityList->getEntity(interfaces->entityList->getLocalPlayer());

	if (!plocal)
		return Vector(0, 0, 0);

	QAngle vAngle = QAngle(0, 0, 0);

	interfaces->engine->getViewAngles();

	float range = 5.f;

	float r_1, r_2;
	float x_1, y_1;

	Vector LocalRendOrig = plocal->GetRenderOrigin();
	Vector LocalViewOfst = plocal->m_vecViewOffset();

	Vector vEyeOrigin = LocalRendOrig + LocalViewOfst;

	r_1 = -(target.y - vEyeOrigin.y);
	r_2 = target.x - vEyeOrigin.x;
	float Yaw = vAngle.yaw - 90.0f;

	float yawToRadian = Yaw * (float)(M_PI / 180.0F);
	x_1 = (float)(r_2 * (float)cos((double)(yawToRadian)) - r_1 * sin((double)(yawToRadian))) / 20.f;
	y_1 = (float)(r_2 * (float)sin((double)(yawToRadian)) + r_1 * cos((double)(yawToRadian))) / 20.f;

	x_1 *= range;
	y_1 *= range;

	return Vector(x_1, y_1, 0);
}


namespace SmokeHelper {

	static void Draw3DFilledCircle(ImDrawList* drawList, const Vector& origin, float radius, ImU32 color)
	{

		float step = (float)M_PI * 2.0f / 72.0f;


		for (float a = 0; a < (M_PI * 2.0f); a += step)
		{
			Vector start = { radius * cosf(a) + origin.x, radius * sinf(a) + origin.y, origin.z };
			Vector end = { radius * cosf(a + step) + origin.x, radius * sinf(a + step) + origin.y, origin.z };

			ImVec2 start2d;
			ImVec2 end2d;

			ImVec2 start22d(start2d.x, start2d.y);
			ImVec2 end22d(end2d.x, end2d.y);

			if (worldToScreen(start, start2d) && worldToScreen(end, end2d))

			{

				start22d.x = start2d.x;
				start22d.y = start2d.y;

				end22d.x = end2d.x;
				end22d.y = end2d.y;
				drawList->AddLine(ImVec2(start22d.x, start22d.y), ImVec2(end22d.x, end22d.y), color);
			}



		}
	}

	bool world2Screen(const Vector& in, Vector& out)
	{
		const auto& matrix = GameData::toScreenMatrix();

		const auto w = matrix._41 * in.x + matrix._42 * in.y + matrix._43 * in.z + matrix._44;
		if (w < 0.001f)
			return false;

		out.x *= 1.0f + (matrix._11 * in.x + matrix._12 * in.y + matrix._13 * in.z + matrix._14) / w;
		out.y *= 1.0f - (matrix._21 * in.x + matrix._22 * in.y + matrix._23 * in.z + matrix._24) / w;

		return true;
	}

	void RenderCircle()
	{
		if (!interfaces->engine->isInGame() || !interfaces->engine->isConnected() || !localPlayer)
			return;

		if (!miscConfig.smokeHelper)
			return;

		if (interfaces->engine->IsConsoleVisible())
			return;

		Vector CrosshairScreen;

		int x, y;
		interfaces->engine->getScreenSize(x, y);

		int cy = y / 2;
		int cx = x / 2;

		for (auto& x : data)
		{
			if (strstr(interfaces->engine->getLevelName(), x.first.c_str()))
			{
				for (auto& it : x.second)
				{
					Vector TCircleOfst = CalcHelpPos(it.pos);
					auto size = ImGui::CalcTextSize(it.info.c_str());
					const float radius = 1.0;

					const auto activeWeapon = localPlayer->getActiveWeapon();

					const Vector ring_target = { radius * cosf(0) + it.ang.x, radius * sinf(0) + it.ang.y, (it.ang.z) };

					ImVec2 ring_target_angle;

					const Vector ring_ground = { radius * cosf(0) + it.pos.x, radius * sinf(0) + it.pos.y, it.pos.z }; // -60 compensation for player height
					ImVec2 ring_ground_angle;

					if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
						continue;

					

					if (activeWeapon)
					{
						if (activeWeapon->isGrenade() && worldToScreen(ring_target, ring_target_angle))
						{
							drawList->AddRectFilled(ImVec2(CrosshairScreen.x - 20.f, CrosshairScreen.y - 10.f), ImVec2(CrosshairScreen.x + size.x + 25.f, CrosshairScreen.y + 12.f), IM_COL32(0, 0, 0, 255));
							drawList->AddRectFilled(ImVec2(CrosshairScreen.x - 20.f, CrosshairScreen.y - -10.f), ImVec2(CrosshairScreen.x + size.x + 25.f, CrosshairScreen.y + 22.f), IM_COL32(0, 0, 0, 255));
							drawList->AddCircle(ImVec2(CrosshairScreen.x, CrosshairScreen.y), 9.f, IM_COL32(0, 0, 0, 255));
							drawList->AddCircleFilled(ImVec2(CrosshairScreen.x, CrosshairScreen.y), 8.f, IM_COL32(255, 255, 0, 255));
							drawList->AddCircleFilled(ImVec2(CrosshairScreen.x - TCircleOfst.x, CrosshairScreen.y - TCircleOfst.y), 2.f, IM_COL32(0, 0, 0, 255));
							drawList->AddText(ImVec2(CrosshairScreen.x + 12.f, CrosshairScreen.y - 7.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
							drawList->AddText(ImVec2(CrosshairScreen.x + 12.f, CrosshairScreen.y - -7.f), IM_COL32(255, 255, 255, 255), it.type.c_str());
							drawList->AddLine(ImVec2(cx, cy), ImVec2(CrosshairScreen.x, CrosshairScreen.y), IM_COL32(0, 0, 0, 255), 2.f);
							drawList->AddCircle(ImVec2(cx, cy), 10.f, IM_COL32_PINK, 255);
						}
					}
				}
			}
		}
	}

	void drawring_3d()
	{
		if (!interfaces->engine->isInGame() || !interfaces->engine->isConnected() || !localPlayer)
			return;

		if (!miscConfig.smokeHelper)
			return;

		if (interfaces->engine->IsConsoleVisible())
			return;

		for (auto& x : data)
		{
			if (strstr(interfaces->engine->getLevelName(), x.first.c_str()))
			{
				for (auto& it : x.second)
				{
					Vector ppos = it.pos;

					if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
						continue;

					const auto activeWeapon = localPlayer->getActiveWeapon();

					if (activeWeapon)
					{
						if (activeWeapon->isGrenade())
						{
							Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 255, 255, 250));
						}
					}
				}
			}
		}
	}

	void RenderInfo()
	{
		if (!interfaces->engine->isInGame() || !interfaces->engine->isConnected() || !localPlayer)
			return;

		if (!miscConfig.smokeHelper)
			return;

		if (interfaces->engine->IsConsoleVisible())
			return;

		Vector InfoPosScreen;

		for (auto& x : data)
		{
			if (strstr(interfaces->engine->getLevelName(), x.first.c_str()))
			{
				for (auto& it : x.second)
				{
					Vector InfoPos = it.pos;

					auto size = ImGui::CalcTextSize(it.info.c_str());

					const auto activeWeapon = localPlayer->getActiveWeapon();

					if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
						continue;

					if (activeWeapon)
					{
						if (activeWeapon->isGrenade() && world2Screen(InfoPos, InfoPosScreen))
						{
							drawList->AddRectFilled(ImVec2(InfoPosScreen.x - 41.f, InfoPosScreen.y - 75.f), ImVec2(InfoPosScreen.x + size.x - 12.f, InfoPosScreen.y - 60.f), IM_COL32(0, 0, 0, 255));
							drawList->AddText(ImVec2(InfoPosScreen.x - it.info.length() - 15.f, InfoPosScreen.y - 75.f), IM_COL32(255, 255, 255, 255), it.info.c_str());
						}
					}
				}
			}
		}
	}

	
}