#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();        //インストラクタ
	void Draw();     //描画用
	void Move();     //移動用
	Vec2f getPos();  //ゲッター
	//Void setpos();  //セッター
};