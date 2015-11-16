#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();        
	void Draw();     
	void Move(Vec2f block_pos, Vec2f block_size);     
	void UpDate(Vec2f block_pos, Vec2f block_size);   
	Vec2f getPos(); 
	Vec2f getSize();

};