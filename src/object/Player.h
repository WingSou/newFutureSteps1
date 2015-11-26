#pragma once
#include "Character.h"
#include "../Attack/Attack.h"

class Player : public Character
{
public:

	Player();
	~Player();

	void SetUp();
	void Draw();     
	void Move();     
	void UpDate();   
	Vec2f getPos(); 
	Vec2f getSize();

private:

	Texture player_image;
	Direction dir;
	int animation_count;
};