#include "Enemy.h"


//----------------------------------------------------------------------------------------
//
//時間がないのでごり押し
//
//ここからエネミークラスに各種子エネミーを継承させていく
//
Enemy_01::Enemy_01(Vec2f pos, Vec2f size) :
enemy01("res/enemy1.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_01::UpDate(Vec2f& _pos)
{
	MovingToTarget(pos, velocity,speed, _pos);
}

void Enemy_01::Move()
{
	
}

void Enemy_01::Draw()
{
	clip.Animation(pos, size, enemy01, dir, count, 512);
}

Vec2f Enemy_01::getPos()
{
	return pos;
}

Vec2f Enemy_01::getSize()
{
	return size;
}

Vec2f Enemy_01::getVelocity()
{
	return speed;
}

Enemy_02::Enemy_02(Vec2f pos, Vec2f size) :
enemy02("res/enemy2.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_02::UpDate(Vec2f& _pos)
{

}

void Enemy_02::Move()
{

}

void Enemy_02::Draw()
{
	clip.Animation(pos, size, enemy02, dir, count, 512);
}

Vec2f Enemy_02::getPos()
{
	return pos;
}

Vec2f Enemy_02::getSize()
{
	return size;
}

Vec2f Enemy_02::getVelocity()
{
	return speed;
}

Enemy_03::Enemy_03(Vec2f pos, Vec2f size) :
enemy03("res/enemy3.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_03::UpDate(Vec2f& _pos)
{

}

void Enemy_03::Move()
{

}

void Enemy_03::Draw()
{
	clip.Animation(pos, size, enemy03, dir, count, 512);
}

Vec2f Enemy_03::getPos()
{
	return pos;
}

Vec2f Enemy_03::getSize()
{
	return size;
}

Vec2f Enemy_03::getVelocity()
{
	return speed;
}

Enemy_04::Enemy_04(Vec2f pos, Vec2f size) :
enemy04("res/enemy4.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_04::UpDate(Vec2f& _pos)
{

}

void Enemy_04::Move()
{

}

void Enemy_04::Draw()
{
	clip.Animation(pos, size, enemy04, dir, count, 512);
}

Vec2f Enemy_04::getPos()
{
	return pos;
}

Vec2f Enemy_04::getSize()
{
	return size;
}

Vec2f Enemy_04::getVelocity()
{
	return speed;
}

Enemy_05::Enemy_05(Vec2f pos, Vec2f size) :
enemy05("res/enemy5.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_05::UpDate(Vec2f& _pos)
{

}

void Enemy_05::Move()
{

}

void Enemy_05::Draw()
{
	clip.Animation(pos, size, enemy05, dir, count, 512);
}

Vec2f Enemy_05::getPos()
{
	return pos;
}

Vec2f Enemy_05::getSize()
{
	return size;
}

Vec2f Enemy_05::getVelocity()
{
	return speed;
}

Enemy_06::Enemy_06(Vec2f pos, Vec2f size) :
enemy06("res/enemy6.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_06::UpDate(Vec2f& _pos)
{

}

void Enemy_06::Move()
{

}

void Enemy_06::Draw()
{
	clip.Animation(pos, size, enemy06, dir, count, 512);
}

Vec2f Enemy_06::getPos()
{
	return pos;
}

Vec2f Enemy_06::getSize()
{
	return size;
}

Vec2f Enemy_06::getVelocity()
{
	return speed;
}

Enemy_07::Enemy_07(Vec2f pos, Vec2f size) :
enemy07("res/enemy7.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_07::UpDate(Vec2f& _pos)
{

}

void Enemy_07::Move()
{

}

void Enemy_07::Draw()
{
	clip.Animation(pos, size, enemy07, dir, count, 512);
}

Vec2f Enemy_07::getPos()
{
	return pos;
}

Vec2f Enemy_07::getSize()
{
	return size;
}

Vec2f Enemy_07::getVelocity()
{
	return speed;
}

Enemy_08::Enemy_08(Vec2f pos, Vec2f size) :
enemy08("res/enemy8.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_08::UpDate(Vec2f& _pos)
{

}

void Enemy_08::Move()
{

}

void Enemy_08::Draw()
{
	clip.Animation(pos, size, enemy08, dir, count, 512);
}

Vec2f Enemy_08::getPos()
{
	return pos;
}

Vec2f Enemy_08::getSize()
{
	return size;
}

Vec2f Enemy_08::getVelocity()
{
	return speed;
}

Enemy_09::Enemy_09(Vec2f pos, Vec2f size) :
enemy09("res/enemy9.png")
{
	this->pos = pos;
	this->size = size;
	dir = Direction::MOVE_RIGHT;
	count = 0;
	is_active = true;
	speed = Vec2f(1.0f, 1.0f);
	velocity = Vec2f::Zero();
}

void Enemy_09::UpDate(Vec2f& _pos)
{

}

void Enemy_09::Move()
{

}

void Enemy_09::Draw()
{
	clip.Animation(pos, size, enemy09, dir, count, 512);
}

Vec2f Enemy_09::getPos()
{
	return pos;
}

Vec2f Enemy_09::getSize()
{
	return size;
}

Vec2f Enemy_09::getVelocity()
{
	return speed;
}