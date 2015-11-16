#pragma once
#include "SceneCommon.h"

class Menu : public SceneCommon
{
public:

	Menu();
	void UpDate();
	void Draw();
	void SetUp();

	bool menu_end;
private:

	Fade* fade;
	ProcessScene scene_switch;
	
};