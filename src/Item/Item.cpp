#include "Item.h"

Item::Item()
{

}

// 選択中のスロット
void Item::Select()
{

}

// スロット番号にアイテムIDを格納
void Item::Receipt(int& slot, int item) 
{
	slot = item;
}


// ゲッター関数
int Item::getSelectSlot() 
{
	return select_slot;
}

// セッター関数

void Item::setSelectSlot(int slot_num) 
{
	select_slot = slot_num;
}