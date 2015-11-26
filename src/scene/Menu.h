#pragma once
#include "SceneCommon.h"

class Menu : public SceneCommon
{
public:

	Menu();
	void UpDate();
	void Draw();
	void SetUp();
	void Move();

	bool menu_end;
private:

	Fade* fade;
	ProcessScene scene_switch;
	Vec3f botten_pos;
	Vec2f botten_end;
};