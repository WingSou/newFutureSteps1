#pragma once
#include "../basicrelated/Common.h"

class Block
{
public:

	Block();
	~Block();
	void UpDate();
	void Draw();
	void SetUp(Vec2f pos, Vec2f size);

	Vec2f getPos();
	Vec2f getSize();
	Vec2f Collision(Vec2f _pos, Vec2f _size, float movement,
		bool up = 1, bool down = 1);

private:

	Vec2f pos;
	Vec2f size;

};