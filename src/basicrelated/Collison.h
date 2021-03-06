#pragma once
#include "Common.h"

enum Direction
{
	MOVE_RIGHT,
	MOVE_LEFT,
	MOVE_UP,
	MOVE_DOWN
};


//�~���m�̓����蔻��
//�~�P�̃|�W�V����		Vec2f�^
//�~�P�̃T�C�Y			Vec2f�^
//�~�Q�̃|�W�V����		Vec2f�^
//�~�Q�̃T�C�Y			Vec2f�^
static bool isHitCircle(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	return ((pos1.x() - pos2.x())*(pos1.x() - pos2.x()) + (pos1.y() - pos2.y())*(pos1.y() - pos2.y())
		<=(size1.x()+size2.x())*(size1.x()+size2.x()));
}

//��`���m�̓����蔻��
//��`�P�̃|�W�V����		Vec2f�^
//��`�P�̃T�C�Y			Vec2f�^
//��`�Q�̃|�W�V����		Vec2f�^
//��`�Q�̃T�C�Y			Vec2f�^
static bool isHitRect(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	return (pos1.x() + size1.x() > pos2.x() && pos1.x() < pos2.x() + size2.x()
		&& pos1.y() + size1.y() > pos2.y() && pos1.y() < pos2.y() + size2.y());
}