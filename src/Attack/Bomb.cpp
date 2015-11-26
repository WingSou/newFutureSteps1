#include "Attack.h"

Bomb::Bomb(Vec2f pos, Vec2f size)
{
	this->pos = pos;
	this->size = size;
	speed = 5.0f;
	throw_count = 40;
	isThrowing = true;
}

bool Bomb::isThrow()
{
	return isThrowing;
}

// •`‰æ
// int          Œü‚¢‚Ä‚¢‚é•ûŒü
void Bomb::Draw(int direction)
{
	drawFillCircle(pos.x(), pos.y(),
				   size.x(), size.y(),
				   30, Color::red);

	//Œü‚¢‚Ä‚¢‚é•ûŒü‚É“Š‚°‚é
	TransPos(direction, pos, speed);
}

//throw_count(get)
unsigned int Bomb::getThrowCount()
{
	return throw_count;
}

//throw_count(set)
void Bomb::setThrowCount(unsigned int count)
{
	throw_count = count;
}