#pragma once
#include "../basicrelated/Common.h"
#include"../basicrelated/Clip.h"

class Character{
public:

	bool isActive(){
		return is_active;
	}

protected:

	Vec2f pos;
	Vec2f size;
	Vec2f velocity;
	Vec2f speed;
	bool is_active;

	int animation_count;
	int animation_index;
	int x_offset, y_offset;

	Clip clip;
	Random rand;
};