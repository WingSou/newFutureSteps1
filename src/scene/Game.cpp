#include "Game.h"

Game::Game()
{
	SetUP();
}

Game::~Game()
{
	delete c_player;
	delete c_map;
}

void Game::SetUP()
{
	scene_switch = MAIN;
	game_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);

	c_player = new Player;
	c_enemy = new Enemy;
	c_map = new Map;
}

void Game::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM開始処理---//

		scene_switch = FADE_IN;

		break;
	case FADE_IN:
		//---フェードイン処理---//

		scene_switch = MAIN;

		break;
	case MAIN:

		c_map->UpDate();
		c_player->Move();

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---フェードアウト処理---//

		game_end = true;

		break;
	default:
		break;
	}
}

void Game::Draw()
{
	switch (scene_switch){
	case MUSIC_START:



		break;
	case FADE_IN:



		break;
	case MAIN:

		c_map->Draw();
		c_player->Draw();

		break;
	case FADE_OUT:



		break;
	default:
		break;
	}
}