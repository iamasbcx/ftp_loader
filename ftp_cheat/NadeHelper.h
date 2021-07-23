#pragma once
#include <string>

struct Vector;
struct UserCmd;
struct ImDrawList;

const auto activeWeapon = localPlayer->getActiveWeapon();

class GrenadeData
{
public:
	std::string info;
	std::string type;
	Vector pos;
	Vector ang;
	float ring_width;

	
	auto isSmoke() noexcept { return activeWeapon()->itemDefinitionIndex() == WeaponId::SmokeGrenade; }
};

void SmokeHelper(ImDrawList* drawList);