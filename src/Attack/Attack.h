#pragma once
#include "../basicrelated/Common.h"

class Attack {
public:
	Attack();
	void Bomb();
	void RocketLancher();
private:
	Vec2f attack_start_pos;
};