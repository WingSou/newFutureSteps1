#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
	Enemy();          //�C���X�g���N�^
	void Draw();      //�`��p
	void Move();      //�ړ��p
	Vec2f getPos();   //�Q�b�^�[
	//Void setPos();   //�Z�b�^�[
};