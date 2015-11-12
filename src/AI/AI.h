#pragma once
#include "../basicrelated/Common.h"
#include "../object/Player.h"
#include "../object/Enemy.h"

enum Distance{
	SHORT = 0,
	MIDDLE = 1,
	LONG = 2
};

class AI {
private:
	int distance_between;               // プレイヤーとエネミーの距離
public:
	AI();                               // コンストラクタ
	void SearchDistance();              // 相手との距離を判定して値を格納する

	// ゲッター
	int getDistanceBetween();

	// セッター
	void setDistanceBetween(int);
};
