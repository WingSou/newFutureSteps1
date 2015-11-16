#include "Obstruction.h"

Obstruction::Obstruction(Vec2f pos,Vec2f size)
{
	this->pos = pos;
	this->size = size;
}

//描画用
void Obstruction::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::blue);
}

//ゲッター
Vec2f Obstruction::getPos()
{
	return pos;
}

Vec2f Obstruction::getSize()
{
	return size;
}