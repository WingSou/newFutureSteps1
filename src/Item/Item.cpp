#include "Item.h"

Item::Item()
{

}

// �I�𒆂̃X���b�g
void Item::Select()
{

}

// �X���b�g�ԍ��ɃA�C�e��ID���i�[
void Item::Receipt(int& slot, int item) 
{
	slot = item;
}


// �Q�b�^�[�֐�
int Item::getSelectSlot() 
{
	return select_slot;
}

// �Z�b�^�[�֐�

void Item::setSelectSlot(int slot_num) 
{
	select_slot = slot_num;
}