#pragma once
#include "SceneCommon.h"
#include "../object/Player.h"
#include "../object/Enemy.h"
#include "../map/Map.h"

class Game : public SceneCommon
{
public:
	
	Game();
	~Game();

	void UpDate();
	void Draw();
	void SetUp();
	void EnemyUpDate();
	bool game_end;

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