#include "Enemy.h"

//�����ʒu�͓K��
Enemy::Enemy(){
	pos = Vec2f(0, 300);
	size = Vec2f(32, 32);
	speed = 3.0f;
}

//�`��p
void Enemy::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::cyan);
}


//�ړ��p
void Enemy::Move(Vec2f block_pos, Vec2f block_size)
{

}

Vec2f Enemy::getPos()
{
	return pos;
}

Vec2f Enemy::getSize()
{
	return size;
}

void Enemy::UpDate()
{
	
}