#include "Result.h"

Result::Result()
{
	SetUp();
}

Result::~Result()
{
	delete fade;
}

void Result::SetUp()
{
	scene_switch = MUSIC_START;
	result_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);
	
	fade = new Fade;
	font.size(50);
}

void Result::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM開始処理---//

		scene_switch = FADE_IN;

		break;
	case FADE_IN:
		//---フェードイン処理---//

		if (fade->FadeIn(0.02f, 0, 0, 0)){
			scene_switch = MAIN;
		}

		break;
	case MAIN:

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---フェードアウト処理---//
		if (fade->FadeOut(0.02f, 0, 0, 0)){
			result_end = true;
		}

		break;
	default:
		break;
	}
}

void Result::Draw()
{
	App::env->bgColor(Color::white);
	font.draw("リザルト画面", Vec2f(-150, 500), Color::black);
	fade->Draw();
}