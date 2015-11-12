#include "Result.h"

Result::Result()
{
	SetUp();
}

Result::~Result()
{

}

void Result::SetUp()
{
	scene_switch = MAIN;
	result_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);
}

void Result::UpDate()
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

		result_end = true;

		break;
	default:
		break;
	}
}

void Result::Draw()
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