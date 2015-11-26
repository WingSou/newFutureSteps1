#pragma once
#include "../basicrelated/Common.h"

class Attack 
{
public:
	Attack();
	bool isAttack();
	void Bomb();
	void Launcher();
	Vec2f getAttackStartPos();
	void setAttackStartPos(Vec2f);
	Vec2f getBombPos();
	void setBombPos(Vec2f);
	Vec2f getLauncherPos();
	void setLauncherPos(Vec2f);

private:
	Vec2f start_pos;                    //攻撃開始地点
	Vec2f bomb_pos;                     //Bomb攻撃開始点
	Vec2f launcher_pos;                 //launcher攻撃開始点
	bool isAttacking;                   //攻撃中
};
