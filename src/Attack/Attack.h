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
	Vec2f start_pos;                    //�U���J�n�n�_
	Vec2f bomb_pos;                     //Bomb�U���J�n�_
	Vec2f launcher_pos;                 //launcher�U���J�n�_
	bool isAttacking;                   //�U����
};
