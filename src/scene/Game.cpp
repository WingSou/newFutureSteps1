#include "Game.h"

Game::Game()
{
	SetUp();
}

Game::~Game()
{
	delete c_player;
	delete c_map;
	delete fade;
}

void Game::SetUp()
{
	scene_switch = MUSIC_START;
	game_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);

	fade = new Fade;

	c_player = new Player;
	c_enemy = new Enemy;
	c_map = new Map;

	font.size(50);
}

void Game::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM�J�n����---//

		scene_switch = FADE_IN;

		break;
	case FADE_IN:
		//---�t�F�[�h�C������---//

		if (fade->FadeIn(0.02f, 0, 0, 0)){
			scene_switch = MAIN;
		}

		break;
	case MAIN:

		c_map->UpDate();
		c_player->Move();

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---�t�F�[�h�A�E�g����---//

		if (fade->FadeOut(0.02f, 0, 0, 0)){
			game_end = true;
		}

		break;
	default:
		break;
	}
}

void Game::Draw()
{
	c_map->Draw();
	c_player->Draw();
	font.draw("�Q�[�����", Vec2f(-150, 500), Color::black);
	fade->Draw();
}