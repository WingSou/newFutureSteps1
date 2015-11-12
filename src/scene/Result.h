#pragma once
#include "SceneCommon.h"

class Result : public SceneCommon
{
public:

	Result();
	~Result();

	void UpDate();
	void Draw();
	void SetUp();

	bool result_end;

private:

	Texture result_logo;
	Media result_bgm;
	ProcessScene scene_switch;

};