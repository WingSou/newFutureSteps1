#pragma once
#include "SceneCommon.h"
#include "../object/Player.h"
#include "../object/Enemy.h"
#include "../object/Map.h"

class Game : public SceneCommon
{
public:
	
	Game();
	~Game();

	void UpDate();
	void Draw();
	void SetUp();

	bool game_end;

private:

	Player* c_player;
	Enemy* c_enemy;
	Map* c_map;
	Fade* fade;

	Texture game_logo;
	Media game_bgm;
	ProcessScene scene_switch;

};

