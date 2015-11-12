#include "Game.h"

Game::Game()
{
	SetUP();
}

Game::~Game()
{

}

void Game::SetUP()
{
	scene_switch = MAIN;
	game_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);
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

		scene_switch = MAIN;

		break;
	case MAIN:

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---�t�F�[�h�A�E�g����---//

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

		App::env->bgColor(Color::white);

		break;
	case FADE_OUT:



		break;
	default:
		break;
	}
}