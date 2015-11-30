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
	botten_pos = Vec3f(-250, 450, 50); //zは三角形の頂点の変更用
	botten_end = Vec2f(400, 450);  //xが最小値、yが最大値
}

void Menu::Move()
{
	if (botten_pos.y() == botten_end.y()){
		menu1 = true;
	}

	if (botten_pos.y() == botten_end.x()){
		menu1 = false;
	}

	if (App::env->isPushKey(GLFW_KEY_UP)){
		botten_pos.y() = botten_end.y();
	}

	if (App::env->isPushKey(GLFW_KEY_DOWN)){
		botten_pos.y() = botten_end.x();
	}
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

		Move();
		
		//ゲームモード時
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
	font.draw("メニュー画面", Vec2f(-150,500),Color::black);
	font.draw("GAME MODE", Vec2f(-150, 400), Color::gray);
	font.draw("TUTORIAL MODE", Vec2f(-150, 350), Color::gray);
	drawFillTriangle(botten_pos.x(), botten_pos.y(), (botten_pos.x() + botten_pos.z()), (botten_pos.y() - (botten_pos.z()/2)), botten_pos.x(), (botten_pos.y() - botten_pos.z()), Color::red);  //選択用矢印

	fade->Draw();
}