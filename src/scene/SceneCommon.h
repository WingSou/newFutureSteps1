#pragma once
#include "../basicrelated/Common.h"

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
	GAME_MAIN,
	RESULT
};

class SceneCommon
{
public:
	
	Vec2f pos;
	Vec2f size;

};