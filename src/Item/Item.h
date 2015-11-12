#pragma once
#include "../basicrelated/Common.h"

// アイテムの名前をナンバリング
enum ITEM {
	NORMAL_BOMB = 0,

};

// アイテムスロット番号
enum SLOT {
	ONE = 0,
	TWO,
	THREE,
	FOUR
};


class Item {
public:
	Item::Item();
	void Receipt(int&, int);              // スロット番号にアイテムIDを格納
	void Select();                        // 選択中のスロット

	// ゲッター
	int getSelectSlot();

	// セッター
	void setSelectSlot(int);

private:
	int slot[4];                          // 選択アイテムを格納する
	int select_slot;                      // 選択中のスロット
};
