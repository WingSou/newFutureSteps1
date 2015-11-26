#include "AI.h"

AI::AI()
{
	distance_between = 0;
	distance_length = 0.0f;
}

// 相手との距離(実数)を判定して値を格納する
// Vec2f e_pos   エネミーのポジション
// Vec2f p_pos   プレイヤーのポジション
// e_radius      エネミーの半径
// p_radius      プレイヤーの半径
void AI::SearchDistanceLength(Vec2f e_pos, Vec2f p_pos, float e_radius, float p_radius)
{
	// 相手との距離のベクトルの大きさ
	float pre_distance = std::sqrtf(((e_pos.x() - p_pos.x())*(e_pos.x() - p_pos.x())) +
									((e_pos.y() - p_pos.y())*(e_pos.y() - p_pos.y())));
	// 二円の半径のベクトルの大きさ
	float s_radius = e_radius + p_radius;
	
	SearchDistance(pre_distance, s_radius);
	setDistanceLength(pre_distance);
}

// 相手との距離(近、中、遠)を判定して値を格納する
// dis_length     敵と相手の距離
// sum_radius     半径の合計
void AI::SearchDistance(float dis_length, float sum_radius) 
{
	int distance = 0;
	// 近距離
	if (dis_length <= SHORTER){
		distance = SHORT_LENGTH;
	}

	// 中距離
	if ((SHORTER <= dis_length) && (dis_length <= LONGER)){
		distance = MIDDLE_LENGTH;
	}

	// 遠距離
	if (LONGER <= dis_length){
		distance = LONG_LENGTH;
	}

	setDistanceBetween(distance);
}

// Get関数群
//*******************************************************************************************************************************

// AI::distance_between
int AI::getDistanceBetween() 
{
	return distance_between;
}

// AI::distance_length
float AI::getDistanceLength()
{
	return distance_length;
}

//*******************************************************************************************************************************

// Set関数群
//*******************************************************************************************************************************

// AI::distance_between)
void AI::setDistanceBetween(int distance) 
{
	distance_between = distance;
}



// AI::distance_length
void AI::setDistanceLength(float pre_distance_length) 
{
	distance_length = pre_distance_length;
}

//*******************************************************************************************************************************