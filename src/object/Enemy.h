#pragma once
#include "Character.h"

class Enemy : public Character
{
public:

	virtual void UpDate(Vec2f& pos) = 0;
	virtual void Draw() = 0;
	virtual void Move() = 0;
	virtual Vec2f getPos() = 0;
	virtual Vec2f getSize() = 0;
	virtual	Vec2f getVelocity() = 0;

	Direction dir;
};

//------------------------------------
//
//ここからエネミー子クラス
//
class Enemy_01 : public Enemy
{
public:

	Enemy_01(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy01;
	int count;
};

class Enemy_02 : public Enemy
{
public:

	Enemy_02(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy02;
	int count;
};

class Enemy_03 : public Enemy
{
public:

	Enemy_03(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy03;
	int count;
};

class Enemy_04 : public Enemy
{
public:

	Enemy_04(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy04;
	int count;
};

class Enemy_05 : public Enemy
{
public:

	Enemy_05(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy05;
	int count;
};

class Enemy_06 : public Enemy
{
public:

	Enemy_06(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy06;
	int count;
};

class Enemy_07 : public Enemy
{
public:

	Enemy_07(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy07;
	int count;
};

class Enemy_08 : public Enemy
{
public:

	Enemy_08(Vec2f pos, Vec2f size);

	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy08;
	int count;
};

class Enemy_09 : public Enemy
{
public:

	Enemy_09(Vec2f pos, Vec2f size);
	void UpDate(Vec2f& _pos);
	void Draw();
	void Move();
	Vec2f getPos();
	Vec2f getSize();
	Vec2f getVelocity();

private:

	Texture enemy09;
	int count;
};