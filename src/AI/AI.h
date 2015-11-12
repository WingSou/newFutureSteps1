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
	int distance_between;               // �v���C���[�ƃG�l�~�[�̋���
public:
	AI();                               // �R���X�g���N�^
	void SearchDistance();              // ����Ƃ̋����𔻒肵�Ēl���i�[����

	// �Q�b�^�[
	int getDistanceBetween();

	// �Z�b�^�[
	void setDistanceBetween(int);
};
