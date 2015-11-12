#include "SceneManager.h"

SceneManager::SceneManager()
{
	SetUp();
}

SceneManager::~SceneManager()
{
	delete c_title;
	delete c_game;
	delete c_result;
}

void SceneManager::SetUp()
{
	scene_switch = TITLE;
	c_title = new Title;
	c_game = new Game;
	c_result = new Result;
}

void SceneManager::UpDate()
{
	switch (scene_switch)
	{
	case TITLE:

		c_title->UpDate();

		if (c_title->title_end == true){
			scene_switch = GAME_MAIN;
			c_title->SetUp();
		}

		break;
	case GAME_MAIN:

		c_game->UpDate();

		if (c_game->game_end == true){
			scene_switch = RESULT;
			c_game->SetUP();
		}

		break;
	case RESULT:

		c_result->UpDate();

		if (c_result->result_end == true){
			scene_switch = TITLE;
			c_result->SetUp();
		}

		break;
	default:

		break;
	}
}

void SceneManager::Draw()
{
	switch (scene_switch)
	{
	case TITLE:
		
		c_title->Draw();
		
		break;
	case GAME_MAIN:

		c_game->Draw();

		break;
	case RESULT:

		c_result->Draw();

		break;
	default:
		break;
	}
}