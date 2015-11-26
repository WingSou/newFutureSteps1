#include "SceneManager.h"

SceneManager::SceneManager()
{
	SetUp();
}

SceneManager::~SceneManager()
{
	delete c_title;
	delete c_menu;
	delete c_game;
	delete c_result;
}

void SceneManager::SetUp()
{
	is_paused = false;
	scene_switch = TITLE;
	c_title = new Title;
	c_menu = new Menu;
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
			c_title->SetUp();


			scene_switch = MENU;
		}

		break;
	case MENU:


		c_menu->UpDate();

		if (c_menu->menu_end == true){
			c_menu->SetUp();


			scene_switch = GAME_MAIN;
		}

		break;
	case GAME_MAIN:

		if (App::env->isPushKey(GLFW_KEY_SPACE)){
			is_paused = !is_paused;
		}

		if (!is_paused){
			c_game->UpDate();
		}


		if (c_game->game_end == true){
			c_game->SetUp();


			scene_switch = RESULT;
		}

		break;
	case RESULT:


		c_result->UpDate();

		if (c_result->result_end == true){
			c_result->SetUp();


			scene_switch = TITLE;
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
	case MENU:

		c_menu->Draw();

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