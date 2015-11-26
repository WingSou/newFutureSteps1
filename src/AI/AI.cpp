#include "AI.h"

AI::AI()
{
	distance_between = 0;
	distance_length = 0.0f;
}

// ����Ƃ̋���(����)�𔻒肵�Ēl���i�[����
// Vec2f e_pos   �G�l�~�[�̃|�W�V����
// Vec2f p_pos   �v���C���[�̃|�W�V����
// e_radius      �G�l�~�[�̔��a
// p_radius      �v���C���[�̔��a
void AI::SearchDistanceLength(Vec2f e_pos, Vec2f p_pos, float e_radius, float p_radius)
{
	// ����Ƃ̋����̃x�N�g���̑傫��
	float pre_distance = std::sqrtf(((e_pos.x() - p_pos.x())*(e_pos.x() - p_pos.x())) +
									((e_pos.y() - p_pos.y())*(e_pos.y() - p_pos.y())));
	// ��~�̔��a�̃x�N�g���̑傫��
	float s_radius = e_radius + p_radius;
	
	SearchDistance(pre_distance, s_radius);
	setDistanceLength(pre_distance);
}

// ����Ƃ̋���(�߁A���A��)�𔻒肵�Ēl���i�[����
// dis_length     �G�Ƒ���̋���
// sum_radius     ���a�̍��v
void AI::SearchDistance(float dis_length, float sum_radius) 
{
	int distance = 0;
	// �ߋ���
	if (dis_length <= SHORTER){
		distance = SHORT_LENGTH;
	}

	// ������
	if ((SHORTER <= dis_length) && (dis_length <= LONGER)){
		distance = MIDDLE_LENGTH;
	}

	// ������
	if (LONGER <= dis_length){
		distance = LONG_LENGTH;
	}

	setDistanceBetween(distance);
}

// Get�֐��Q
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

// Set�֐��Q
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