#include "Player.h"
#include "../basicrelated/Collison.h"

Player::Player(){
	pos = Vec2f(0, 0);
	size = Vec2f(32, 32);
	speed = 3.0f;
}

void Player::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::cyan);
}


void Player::Move(Vec2f block_pos, Vec2f block_size)
{

	if (App::env->isPressKey('W')) {
		pos.y() += speed;
		if (isHitCircle(pos,size,block_pos,block_size)){
			pos.y() -= speed;
		}
	}
	if (App::env->isPressKey('S')) {
		pos.y() -= speed;
		if (isHitCircle(pos, size, block_pos, block_size)){
			pos.y() += speed;
		}
	}
	if (App::env->isPressKey('D')) {
		pos.x() += speed;
		if (isHitCircle(pos, size, block_pos, block_size)){
			pos.x() -= speed;
		}
	}
	if (App::env->isPressKey('A')) {
		pos.x() -= speed;
		if (isHitCircle(pos, size, block_pos, block_size)){
			pos.x() += speed;
		}
	}


}

Vec2f Player::getPos()
{
	return pos;
}

Vec2f Player::getSize()
{
	return size;
}

void Player::UpDate(Vec2f block_pos, Vec2f block_size)
{
	Move(block_pos, block_size);
}

