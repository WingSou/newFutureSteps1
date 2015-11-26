#include "Attack.h"


Attack::Attack()
{
	start_pos = Vec2f(0, 0);
	bomb_pos = Vec2f(0, 0);
	launcher_pos = Vec2f(0, 0);
	isAttacking = true;
}



// 攻撃中？
bool Attack::isAttack()
{
	return isAttacking;
}

// 向いている方向に応じて打ち出す
// int      今見ている方向
// Vec2f    武装のポジション
// float    弾速
void Attack::TransPos(int direction, Vec2f &pos, float speed)
{
	if (direction == Direction::MOVE_UP){
		pos.y() += speed;
	}
	if (direction == Direction::MOVE_DOWN){
		pos.y() -= speed;
	}
	if (direction == Direction::MOVE_RIGHT){
		pos.x() += speed;
	}
	if (direction == Direction::MOVE_LEFT){
		pos.x() -= speed;
	}
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