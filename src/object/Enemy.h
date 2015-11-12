#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
	Enemy();          //インストラクタ
	void Draw();      //描画用
	void Move();      //移動用
	Vec2f getPos();   //ゲッター
	//Void setPos();   //セッター
};