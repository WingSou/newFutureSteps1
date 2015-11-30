#include "Tutorial.h"


Tutorial::Tutorial()
{
	SetUp();
}

Tutorial::~Tutorial()
{
	delete c_player;

	delete c_map;
	delete c_fade;
}

void Tutorial::SetUp()
{
	scene_switch = MUSIC_START;
	tutorial_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);

	c_fade = new Fade;

	c_player = new Player;

	c_map = new Map;

	font.size(50);
}

//�G�l�~�[�����j���ꂽ�Ƃ��̍폜����
bool Erase(Enemy* enemy)
{
	return !enemy->isActive();
}

void Tutorial::EnemyUpDate()
{
	if (App::env->isPushKey('O')){
		enemy.push_back(new Enemy_01(Vec2f(30, 30), Vec2f(128, 128)));
		enemy.push_back(new Enemy_02(Vec2f(130, 130), Vec2f(128, 128)));
		enemy.push_back(new Enemy_03(Vec2f(-30, -30), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_04(Vec2f(-30, 430), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_05(Vec2f(-830, -330), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_06(Vec2f(-730, -530), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_07(Vec2f(-630, 530), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_08(Vec2f(-530, 430), Vec2f(128, 128)));
		//enemy.push_back(new Enemy_09(Vec2f(430, 330), Vec2f(128, 128)));
	}

	std::list<Enemy*>::iterator it = enemy.begin();


	while (it != enemy.end()){
		(*it)->UpDate(c_player->getPos());
		it++;
	}
	enemy.remove_if(Erase);
}

void Tutorial::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM�J�n����---//

		if (c_fade->FadeIn(0.02f, 0, 0, 0)){
			scene_switch = MAIN;
		}

		break;
	case MAIN:

		c_map->UpDate();

		if (time.timeCounter(3.0f)){

			c_player->UpDate();
			EnemyUpDate();

		}

		if (App::env->isPushKey(GLFW_KEY_SPACE)){
			is_pause = true;
		}

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---�t�F�[�h�A�E�g����---//

		if (c_fade->FadeOut(0.02f, 0, 0, 0)){
			tutorial_end = true;
		}

		break;
	default:
		break;
	}
}

void Tutorial::Draw()
{
	c_map->Draw();
	c_player->Draw();

	std::list<Enemy*>::iterator it = enemy.begin();
	while (it != enemy.end()){
		(*it)->Draw();
		it++;
	}

	c_fade->Draw();
	font.draw("�`���[�g���A�����", Vec2f(-150, 500), Color::black);
	font.draw("Enter�Ń��j���[�ɖ߂�", Vec2f(-150, 400), Color::black);
	font.draw("��ړ���W�A���ړ���S�A�E�ړ���D�A���ړ���A", Vec2f(-350, -450), Color::gray);
	font.draw("�ʏ�U���́A�ߐڍU���́A�������U���́A�������U����", Vec2f(-350, -500), Color::gray);
	font.draw("�A�C�e����", Vec2f(-150, -550), Color::gray);
	font.draw("���@�ȊO�͂��ׂēG", Vec2f(-150, -600), Color::gray);
}