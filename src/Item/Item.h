#pragma once
#include "../basicrelated/Common.h"

// �A�C�e���̖��O���i���o�����O
enum ITEM {
	NORMAL_BOMB = 0,

};

// �A�C�e���X���b�g�ԍ�
enum SLOT {
	ONE = 0,
	TWO,
	THREE,
	FOUR
};


class Item {
public:
	Item::Item();
	void Receipt(int&, int);              // �X���b�g�ԍ��ɃA�C�e��ID���i�[
	void Select();                        // �I�𒆂̃X���b�g

	// �Q�b�^�[
	int getSelectSlot();

	// �Z�b�^�[
	void setSelectSlot(int);

private:
	int slot[4];                          // �I���A�C�e�����i�[����
	int select_slot;                      // �I�𒆂̃X���b�g
};
