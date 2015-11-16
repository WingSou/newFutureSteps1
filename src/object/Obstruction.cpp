#include "Obstruction.h"

Obstruction::Obstruction(Vec2f pos,Vec2f size)
{
	this->pos = pos;
	this->size = size;
}

//�`��p
void Obstruction::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::blue);
}

//�Q�b�^�[
Vec2f Obstruction::getPos()
{
	return pos;
}

Vec2f Obstruction::getSize()
{
	return size;
}