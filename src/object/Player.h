#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();        //�C���X�g���N�^
	void Draw();     //�`��p
	void Move();     //�ړ��p
	Vec2f getPos();  //�Q�b�^�[
	//Void setpos();  //�Z�b�^�[
};