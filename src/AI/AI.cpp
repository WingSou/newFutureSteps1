#include "AI.h"

AI::AI(){
	distance_between = 0;
}

// ����Ƃ̋����𔻒肵�Ēl���i�[����
void AI::SearchDistance() {
	int distance;

	setDistanceBetween(distance);
}

// �Q�b�^�[(DistanceBetween)
int AI::getDistanceBetween() {
	return distance_between;
}
// �Z�b�^�[(DistanceBetween)
void AI::setDistanceBetween(int distance) {
	distance_between = distance;
}