#pragma once
#include "../basicrelated/Common.h"

enum Distance
{
	SHORT_LENGTH = 0,
	MIDDLE_LENGTH = 1,
	LONG_LENGTH = 2
};

enum Length 
{
	SHORTER,
	LONGER
};

class AI 
{
private:
	int distance_between;                                         // プレイヤーとエネミーの距離（近、中、遠）
	float distance_length;                                        // プレイヤーとエネミーの距離の長さ（実数）

public:
	AI();                                                         // コンストラクタ
	void SearchDistance(float, float);                            // 相手との距離(近、中、遠)を判定して値を格納する
	void SearchDistanceLength(Vec2f, Vec2f, float, float);        // 相手との距離(実数)を判定して値を格納する

	// ゲッター
	int getDistanceBetween();
	float getDistanceLength();

	// セッター
	void setDistanceBetween(int);
	void setDistanceLength(float);
};
