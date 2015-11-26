#include "Game.h"

Game::Game()
{
	SetUp();
}

Game::~Game()
{
	delete c_player;

	delete c_map;
	delete c_fade;
}

void Game::SetUp()
{
	scene_switch = MUSIC_START;
	game_end = false;
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);

	c_fade = new Fade;

	c_player = new Player;

	c_map = new Map;

	is_pause = false;

	font.size(50);
}

//�G�l�~�[�����j���ꂽ�Ƃ��̍폜����
bool enemyErase(Enemy* enemy)
{
	return !enemy->isActive();
}

void Game::EnemyUpDate()
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
	enemy.remove_if(enemyErase);
}

void Game::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM�J�n����---//

		scene_switch = FADE_IN;

		break;
	case FADE_IN:
		//---�t�F�[�h�C������---//

		if (c_fade->FadeIn(0.02f, 0, 0, 0)){
			scene_switch = MAIN;
		}

		break;
	case MAIN:



		//�|�[�Y���ĂȂ��Ƃ��̃Q�[�����̏����͂��̒��ɂ��ׂď���
		if (is_pause == false){

			c_map->UpDate();

			if(time.timeCounter(3.0f)){

				c_player->UpDate();
				EnemyUpDate();

			
				
			}

		}//-------------------------------------------------------

		//�|�[�Y���Ă���Ƃ��̃Q�[�����̏����͂��̒��ɏ���
		if (is_pause == true){

		}


		if (App::env->isPushKey(GLFW_KEY_SPACE)){
			is_pause = !true;
		}

		if (App::env->isPushKey(GLFW_KEY_ENTER)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---�t�F�[�h�A�E�g����---//

		if (c_fade->FadeOut(0.02f, 0, 0, 0)){
			game_end = true;
		}

		break;
	default:
		break;
	}
}

void Game::Draw()
{
	c_map->Draw();
	c_player->Draw();

	std::list<Enemy*>::iterator it = enemy.begin();
	while (it != enemy.end()){
		(*it)->Draw();
		it++;
	}

	c_fade->Draw();
	font.draw("�Q�[�����", Vec2f(-150, 500), Color::black);
	
}