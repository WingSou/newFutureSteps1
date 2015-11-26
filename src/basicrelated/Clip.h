#pragma once
#include "Common.h"

class Clip
{
public:

	void Animation(Vec2f pos, Vec2f size, Texture& text, Direction dir, int& animation_count, float default_size = 512);

private:

	int x_offset, y_offset;
	int animation_index;

};