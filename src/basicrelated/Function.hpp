#pragma once
#include "../lib/framework.hpp"

//追尾処理用関数
//自身のポジション				Vec2f
//自身の移動量			    Vec2f
//自身のスピード				Vec2f
//追尾する対象のポジション	Vec2f
static void MovingToTarget(Vec2f& own_pos, Vec2f own_velocity, Vec2f own_speed, Vec2f& target_pos){

	Random rand;
	rand.setSeed(time(nullptr));

	own_velocity.x() = rand(0.001f, 0.005f)*(target_pos.x() - own_pos.x())*own_speed.x();
	own_velocity.y() = rand(0.001f, 0.005f)*(target_pos.y() - own_pos.y())*own_speed.y();

	float two_distanceX = (own_pos.x() - target_pos.x());
	float two_distanceY = (own_pos.y() - target_pos.y());

	//追尾する相手との距離
	float distance_with_target = sqrt((two_distanceX * two_distanceX) + (two_distanceY * two_distanceY));

	own_pos.x() += own_velocity.x();
	own_pos.y() += own_velocity.y();
}

static int ReceiveDamage(int hp, int damage)
{
	return hp - damage;
}