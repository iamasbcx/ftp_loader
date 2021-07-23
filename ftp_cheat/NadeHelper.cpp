#include "../SDK/Vector.h"
#include "NadeHelper.h"
#include "../Hooks.h"
#include "../Interfaces.h"
#include "../SDK/GlobalVars.h"
#include "../SDK/Client.h"
#include "../SDK/LocalPlayer.h"
#include "../SDK/Entity.h"
#include "../GUI.h"
#include "../Helpers.h"
#include "../GameData.h"

#include "../SDK/Engine.h"
#include "../SDK/Surface.h"
#include "../Hacks/Misc.cpp"


#include "../imgui/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../imgui/imgui_internal.h"

GrenadeData Mirage[] = //Info, Position, Angle
{
	{ "short","S+T", Vector{1422.987548828125, -367.96875, -167.968994140625}, Vector{1094.2816627165446, -386.00306533949265, 275.28430468658763}, 10.f },
	{ "Stairs","S+T", Vector{1148.1448974609375, -1183.996337890625, -205.56886291503906}, Vector{781.630009761803, -1281.2513077395333, 194.6376237271403}, 10.f },
	{ "CT Spawn","S+T", Vector{1088.4710693359375, -1015.5730590820312, -258.0413818359375}, Vector{731.8484079567372, -1271.2391947873755, 54.74013436559389}, 10.f },
	{ "A Spot","S+T", Vector{343.3034973144531, -621.6212158203125, -163.4346923828125}, Vector{162.18468481091327, -948.1384067102153, 243.40285585863063}, 10.f },
	{ "CT Spawn","J+T", Vector{343.301513671875, -621.6234741210938, -163.43299865722656}, Vector{163.75862006465997, -988.8214954295121, 194.27538649544158}, 10.f },
	{ "1-Way Kitchen","S+T", Vector{-2114.013916015625, 830.583740234375, -121.57852172851562}, Vector{-2215.2586143121757, 342.5935009330796, 34.44401519344012}, 10.f },
	{ "B Apps","S+T", Vector{-1862.96875, 176.00091552734375, -159.96875}, Vector{-1512.6858083889908, 315.0658360397319, 243.06982553315612}, 10.f },
	{ "Ramp","J+T", Vector{-1711.96875, -761.03125, -167.96875}, Vector{-1279.3806268729031, -945.6192815524748, 80.58806073926425}, 10.f },
	{ "Palace","J+T", Vector{-1711.96875, -761.031005859375, -167.96875}, Vector{-1378.795729806807, -1031.2011796034606, 168.6757640114003}, 10.f },
	{ "Ramp","S+T", Vector{-1710.9691162109375, -1551.6826171875, -259.72845458984375}, Vector{-1356.851463294147, -1571.3737777273238, 160.53362301545354}, 10.f },
	{ "Bench","S+T", Vector{-1360.8199462890625, -1173.969970703125, -117.1117172241211}, Vector{-1549.9764361634143, -920.6799455087571, 336.44514322590356}, 10.f },
	{ "Retake B","S+T", Vector{-1360.8408203125, -1173.9993896484375, -117.1117172241211}, Vector{-1518.2874699114238, -891.1633199802332, 331.43268386600846}, 10.f },
	{ "Retake B","S+T", Vector{-1434.03125, -1173.96875, -167.968994140625}, Vector{-1481.4961805281828, -922.8922598119101, 331.0097766061086}, 10.f },
	{ "Window","S+T", Vector{-968.0004272460938, -380.03125, -345.9513854980469}, Vector{-1143.2142391916066, -723.7528616520477, 41.047748546418234}, 10.f },
	{ "Kithcen","J+T", Vector{-160.031005859375, 887.9869995117188, -135.3284912109375}, Vector{-492.1054687881878, 721.3537459749265, 268.28766517886635}, 10.f },
	{ "Window","J+T", Vector{-160.031005859375, 887.9869995117188, -135.3284912109375}, Vector{-430.1582868672727, 711.0856345899405, 317.7635059780887}, 10.f },
	{ "Right Arch","S+T", Vector{-622.2141723632812, 615.9981079101562, -78.97152709960938}, Vector{-766.5848646401155, 580.8662504484357, 463.83647040380544}, 10.f },
	{ "Left Arch","S+T", Vector{-835.231201171875, 614.54638671875, -79.19549560546875}, Vector{-947.3534774860162, 543.1883623043059, 468.28425812342755}, 10.f },
	{ "B Apps","S+T", Vector{-2415.970458984375, -115.75731658935547, -157.97093200683594}, Vector{-2091.1394980711384, 201.65763289698185, 136.04481484469093}, 10.f },
	{ "Fast Plant","S+T", Vector{-736.0131225585938, 623.9751586914062, -75.96875}, Vector{-1041.7913474819045, 578.8604945791699, 388.15749508179584}, 10.f },
	{ "Balcony","S+T", Vector{-711.0526733398438, 520.03125, -77.97406768798828}, Vector{-969.5936048450333, 558.1389132362156, 417.0854462713537}, 10.f },
	{ "Bench","S+T", Vector{-538.5017700195312, 520.0421752929688, -81.29318237304688}, Vector{-923.7580811384923, 512.9736767099569, 312.3302222117026}, 10.f },
	{ "A Cross","S+T", Vector{-968.0056762695312, -380.0092468261719, -345.96234130859375}, Vector{-904.2173089951042, -634.2341054329919, 149.64072728711506}, 10.f },
	{ "Connector","S+T", Vector{761.7808837890625, -1212.290283203125, -108.96900177001953}, Vector{457.55187324075496, -1242.7367792483785, 353.48481180585327}, 10.f },
	{ "Short","S+T", Vector{360.0754699707031, -691.96875, -162.4967803955078}, Vector{-78.09038183909996, -541.9019743463349, 102.65417184033066}, 10.f },
	{ "Underpass","S+T", Vector{343.3034973144531, -621.6211547851562, -163.42967224121094}, Vector{-99.4151449757261, -545.745304401234, 129.8986219149187}, 10.f },
	{ "Window","S+T", Vector{343.3034973144531, -621.6211547851562, -163.42967224121094}, Vector{-80.71843560104378, -623.3733917886428, 172.3898183997943}, 10.f },

	{ "CT Spawn","S+T", Vector{-31.915420532226562, -1418.03125, -167.96875}, Vector{-222.56263649539028, -1797.3346168552653, 167.83929184602266}, 5.f },

	{ "Jungle","S+T", Vector{815.9822387695312, -1457.658935546875, -108.96875}, Vector{371.32050336164946, -1500.6705437968217, 189.58952282609152}, 5.f },
	{ "Connector","S+T", Vector{761.7808837890625, -1212.290283203125, -108.96900177001953}, Vector{457.55187324075496, -1242.7367792483785, 353.48481180585327}, 5.f },
	{ "Fast Plant","S+T", Vector{875.9537353515625, -1209.1705322265625, -108.96900177001953}, Vector{566.5034379942101, -1396.3740247330097, 303.99890654658134}, 5.f }

};

static bool worldToScreenNade(const Vector& in, ImVec2& out) noexcept
{
	const auto& matrix = GameData::toScreenMatrix();
	const auto w = matrix._41 * in.x + matrix._42 * in.y + matrix._43 * in.z + matrix._44;

	if (w < 0.001f)
	{
		return false;
	}

	out = ImGui::GetIO().DisplaySize / 2.0f;
	out.x *= 1.0f + (matrix._11 * in.x + matrix._12 * in.y + matrix._13 * in.z + matrix._14) / w;
	out.y *= 1.0f - (matrix._21 * in.x + matrix._22 * in.y + matrix._23 * in.z + matrix._24) / w;
	//out = ImFloor(out);
	return true;
}

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

		if (worldToScreenNade(start, start2d) && worldToScreenNade(end, end2d))

		{

			start22d.x = start2d.x;
			start22d.y = start2d.y;

			end22d.x = end2d.x;
			end22d.y = end2d.y;
			drawList->AddLine(ImVec2(start22d.x, start22d.y), ImVec2(end22d.x, end22d.y), color);
		}



	}
}

void SmokeHelper(ImDrawList* drawList)
{
	

	if (!localPlayer || !localPlayer->isAlive() || !miscConfig.smokeHelper)
		return;

	if (!localPlayer->getActiveWeapon()->isSmoke())
		return;

	if (!strstr(interfaces->engine->getLevelName(), "mirage"))
		return;

	for (const auto& it : Mirage)
	{

		if (const float dist = localPlayer->origin().distTo(it.pos); dist > 500.0f)
			continue;


		//draw circle
		//const bool in_pos = (round(localPlayer->getEyePosition().x) - round(it.pos.x) <= it.ring_width && round(localPlayer->getEyePosition().y) - round(it.pos.y) <= it.ring_width);


		//Vector Crosshair = (localPlayer->getEyePosition()) + (Helpers::CalcDir(it.ang) * 250.f);

		const ImVec2 size = ImGui::CalcTextSize(it.info.c_str());
		const float radius = 1.0;

		const Vector ring_target = { radius * cosf(0) + it.ang.x, radius * sinf(0) + it.ang.y, (it.ang.z) };

		ImVec2 ring_target_angle;

		const Vector ring_ground = { radius * cosf(0) + it.pos.x, radius * sinf(0) + it.pos.y, it.pos.z }; // -60 compensation for player height
		ImVec2 ring_ground_angle;

		if (worldToScreenNade(ring_target, ring_target_angle))
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

			Draw3DFilledCircle(drawList, it.pos, 10.f, IM_COL32(255, 255, 255, 250));

			//if (worldToScreen(ring_ground, ring_ground_angle))
			//{
				//ground
			//	drawList->AddCircleFilled(ring_ground_angle, 8.f, IM_COL32(255, 255, 255, 80));
				//line
			//	drawList->AddLine(ring_target_angle, ring_ground_angle, IM_COL32(0, 0, 0, 255), 2.f);
			//}
			//else if (in_pos)
			//	drawList->AddLine(ImGui::GetIO().DisplaySize / 2.0f, ring_target_angle, IM_COL32(0, 0, 0, 255), 2.f);
		}

	}
}