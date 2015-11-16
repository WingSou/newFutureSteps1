#pragma once
#include "../basicrelated/Common.h"
#define MAP_HEIGHT 23
#define MAP_WIDTH 32

class Map
{
public:

	Map();
	void SetUp();
	void Draw();
	void UpDate();

private:

	Vec2f pos;
	Vec2f size;

	Texture stage_img;
};