#pragma once
#include "SceneCommon.h"
#include "../object/Player.h"
#include "../object/Enemy.h"
#include "../map/Map.h"

class Tutorial : public SceneCommon
{
public:

	Tutorial();
	~Tutorial();

	void UpDate();
	void Draw();
	void SetUp();
	void EnemyUpDate();
	bool tutorial_end;

private:

	Player* c_player;
	Map* c_map;
	Fade* c_fade;

	std::list<Enemy*> enemy;

	Texture game_logo;
	Media game_bgm;
	ProcessScene scene_switch;

	bool is_pause;
};