#pragma once
#include "SceneCommon.h"

class Game : public SceneCommon
{
public:
	
	Game();
	~Game();

	void UpDate();
	void Draw();
	void SetUP();

	bool game_end;

private:

	Texture game_logo;
	Media game_bgm;
	ProcessScene scene_switch;

};

