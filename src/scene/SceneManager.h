#pragma once
#include "Title.h"
#include "Game.h"
#include "Result.h"


class SceneManager
{
public:
	
	SceneManager();
	~SceneManager();
	void SetUp();
	void UpDate();
	void Draw();

private:

	Title* c_title;
	Game* c_game;
	Result* c_result;

	ManagerScene scene_switch;

};