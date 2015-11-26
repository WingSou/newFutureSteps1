#pragma once
#include "Common.h"

enum Direction
{
	MOVE_RIGHT,
	MOVE_LEFT,
	MOVE_UP,
	MOVE_DOWN
};


//円同士の当たり判定
//円１のポジション		Vec2f型
//円１のサイズ			Vec2f型
//円２のポジション		Vec2f型
//円２のサイズ			Vec2f型
static bool isHitCircle(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	return ((pos1.x() - pos2.x())*(pos1.x() - pos2.x()) + (pos1.y() - pos2.y())*(pos1.y() - pos2.y())
		<=(size1.x()+size2.x())*(size1.x()+size2.x()));
}

//矩形同士の当たり判定
//矩形１のポジション		Vec2f型
//矩形１のサイズ			Vec2f型
//矩形２のポジション		Vec2f型
//矩形２のサイズ			Vec2f型
static bool isHitRect(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	return (pos1.x() + size1.x() > pos2.x() && pos1.x() < pos2.x() + size2.x()
		&& pos1.y() + size1.y() > pos2.y() && pos1.y() < pos2.y() + size2.y());
}