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
	int distance_between;                                         // �v���C���[�ƃG�l�~�[�̋����i�߁A���A���j
	float distance_length;                                        // �v���C���[�ƃG�l�~�[�̋����̒����i�����j

public:
	AI();                                                         // �R���X�g���N�^
	void SearchDistance(float, float);                            // ����Ƃ̋���(�߁A���A��)�𔻒肵�Ēl���i�[����
	void SearchDistanceLength(Vec2f, Vec2f, float, float);        // ����Ƃ̋���(����)�𔻒肵�Ēl���i�[����

	// �Q�b�^�[
	int getDistanceBetween();
	float getDistanceLength();

	// �Z�b�^�[
	void setDistanceBetween(int);
	void setDistanceLength(float);
};
