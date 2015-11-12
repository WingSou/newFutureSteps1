#include "Enemy.h"

//初期位置は適当
Enemy::Enemy(){
	pos = Vec2f(0, 300);
	size = Vec2f(200, 200);
	speed = 10.0f;
}

//描画用
void Enemy::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::cyan);
}


//移動用
void Enemy::Move()
{

}

Vec2f Enemy::getPos()
{
	return pos;
}