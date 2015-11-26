﻿#include "Attack.h"


Attack::Attack()
{
	start_pos = Vec2f(0, 0);
	bomb_pos = Vec2f(0, 0);
	launcher_pos = Vec2f(0, 0);
	isAttacking = true;
}

// 通常爆弾
// 引数は
void Attack::Bomb()
{
	const float bomb_radius = 100.0f;
	drawFillCircle(start_pos.x(), start_pos.y(),
				   bomb_radius, bomb_radius,
				   30, Color::red);
	
	//向いている方向に投げる

}

//近距離攻撃群
//**********************************************************************************************************************



//**********************************************************************************************************************

//中距離攻撃群
//**********************************************************************************************************************



//**********************************************************************************************************************

//遠距離攻撃群
//**********************************************************************************************************************

void Attack::Launcher()
{

}

//**********************************************************************************************************************

// 攻撃中？
bool Attack::isAttack()
{
	return isAttacking;
}

// 攻撃の瞬間のキャラクターポジションを格納する
// プレイヤーの場合攻撃ボタンを押して、正常に攻撃に移行できる時に呼び出すこと
// エネミーの場合攻撃を発射するタイミングで呼び出すこと
// 引数は"Vec2f型"の攻撃を発射するキャラのPos変数
void Attack::setAttackStartPos(Vec2f character_pos)
{
	start_pos = character_pos;
}

// 攻撃発射点を使うときに呼び出し
// 返り値"Vec2f"なので注意
Vec2f Attack::getAttackStartPos()
{
	return start_pos;
}