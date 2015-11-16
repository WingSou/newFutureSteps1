#include "Menu.h"

Menu::Menu()
{
	SetUp();
	font.size(50);
}

void Menu::SetUp()
{
	scene_switch = MUSIC_START;
	menu_end = false;
	fade = new Fade;
}

void Menu::UpDate()
{
	switch (scene_switch)
	{
	case MUSIC_START:
		

		scene_switch = FADE_IN;
		
		break;
	case FADE_IN:
		
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
		
		if (fade->FadeOut(0.02f, 0, 0, 0)){
			menu_end = true;
		}
		
		break;
	default:
		break;
	}
}

void Menu::Draw()
{
	font.draw("ƒƒjƒ…[‰æ–Ê", Vec2f(-150,500),Color::black);

	fade->Draw();
}