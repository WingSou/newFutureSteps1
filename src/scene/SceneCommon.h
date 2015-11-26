#pragma once
#include "../basicrelated/Fade.h"
#include "../basicrelated/CountTime.h"

enum ProcessScene
{
	MUSIC_START,
	FADE_IN,
	MAIN,
	FADE_OUT
};

enum ManagerScene
{
	TITLE,
	MENU,
	GAME_MAIN,
	RESULT
};

class SceneCommon
{
public:
	
	Vec2f pos;
	Vec2f size;
	Font font = ("res/meiryo.ttc");
	TimeCount time;
};