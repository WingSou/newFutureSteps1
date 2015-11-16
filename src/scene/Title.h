#pragma once
#include "SceneCommon.h"

class Title : public SceneCommon
{
public:

	Title();
	~Title();

	void UpDate();
	void Draw();
	void SetUp();

	bool title_end;

private:

	Fade* fade;
	Font font;
	Texture title_logo, title_logo2;
	Media title_bgm;
	ProcessScene scene_switch;

	Vec2f clip_size;

	Vec2f title_pos;
	Vec2f title_size;
	Vec2f title_clip_size;
};