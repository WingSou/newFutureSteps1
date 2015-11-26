#include "Player.h"
#include "../basicrelated/Collison.h"

Player::Player() :
player_image("res/player.png")
{
	SetUp();
}

Player::~Player()
{

}

void Player::SetUp()
{
	pos = Vec2f(0, 0);
	size = Vec2f(128, 128);
	speed = Vec2f(3.0f, 3.0f);
	animation_count = 0;
	dir = Direction::MOVE_DOWN;
}

void Player::Move()
{
	if (App::env->isPressKey('W')) {

		pos.y() += speed.y();
		dir = Direction::MOVE_UP;

		if (pos.y() + size.y() > HEIGHT / 2){
			pos.y() -= speed.y();
		}
	}
	if (App::env->isPressKey('S')) {

		pos.y() -= speed.y();
		dir = Direction::MOVE_DOWN;

		if (pos.y() < -HEIGHT / 2){
			pos.y() += speed.y();
		}
	}
	if (App::env->isPressKey('D')) {

		pos.x() += speed.x();
		dir = Direction::MOVE_RIGHT;

		if (pos.x() + size.x() > WIDTH / 2){
			pos.x() -= speed.x();
		}
	}
	if (App::env->isPressKey('A')) {

		pos.x() -= speed.x();
		dir = Direction::MOVE_LEFT;

		if (pos.x() < -WIDTH / 2){
			pos.x() += speed.x();
		}
	}
}

void Player::UpDate()
{
	Move();
}

void Player::Draw()
{
	clip.Animation(pos, size, player_image, dir, animation_count);
}

Vec2f Player::getPos()
{
	return pos;
}

Vec2f Player::getSize()
{
	return size;
}