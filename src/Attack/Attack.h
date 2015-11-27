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
	Vec2f start_pos;                    //�U���J�n�n�_
	Vec2f bomb_pos;                     //Bomb�U���J�n�_
	Vec2f launcher_pos;                 //launcher�U���J�n�_
	bool isAttacking;                   //�U����
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
	Vec2f pos;                   //�n�_
	Vec2f size;                  //�傫��
	float speed;                 //�e��
	unsigned int throw_count;    //�����鎞��
	bool isThrowing;             //�����Ă邩
};
