#include "Enemy.h"

//�����ʒu�͓K��
Enemy::Enemy(){
	pos = Vec2f(0, 300);
	size = Vec2f(200, 200);
	speed = 10.0f;
}

//�`��p
void Enemy::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::cyan);
}


//�ړ��p
void Enemy::Move()
{

}

Vec2f Enemy::getPos()
{
	return pos;
}