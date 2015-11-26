#pragma once
#include "../basicrelated/Common.h"

class Attack 
{
public:
	Attack();
	bool isAttack();
	void TransPos(int, Vec2f&, float);
	Vec2f getAttackStartPos();
	void setAttackStartPos(Vec2f);

private:
	Vec2f start_pos;                    //攻撃開始地点
	Vec2f bomb_pos;                     //Bomb攻撃開始点
	Vec2f launcher_pos;                 //launcher攻撃開始点
	bool isAttacking;                   //攻撃中
};



class Bomb:public Attack
{
public:
	Bomb(Vec2f, Vec2f);
	void Draw(int);
	bool isThrow();
	unsigned int getThrowCount();
	void setThrowCount(unsigned int);

private:
	Vec2f pos;                   //始点
	Vec2f size;                  //大きさ
	float speed;                 //弾速
	unsigned int throw_count;    //投げる時間
	bool isThrowing;             //投げてるか
};
