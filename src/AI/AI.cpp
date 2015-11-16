#include "AI.h"

AI::AI(){
	distance_between = 0;
}

// 相手との距離を判定して値を格納する
void AI::SearchDistance() {
	int distance;

	setDistanceBetween(distance);
}

// ゲッター(DistanceBetween)
int AI::getDistanceBetween() {
	return distance_between;
}
// セッター(DistanceBetween)
void AI::setDistanceBetween(int distance) {
	distance_between = distance;
}