#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
	Enemy();          
	void Draw();      
	void Move(Vec2f block_pos, Vec2f block_size);    
	void UpDate();    
	Vec2f getPos();   
	Vec2f getSize();
};