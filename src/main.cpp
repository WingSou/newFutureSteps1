#pragma once
#include "../src/scene/SceneManager.h"

std::shared_ptr<AppEnv> App::env;

int main() {
	
	App::env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, true, true);

	SceneManager* scene_manager = new SceneManager;

	while (App::env->isOpen()) {

		scene_manager->UpDate();

		App::env->begin();

		scene_manager->Draw();

		//"Q"押したら終了するよ
		if (App::env->isPushKey('Q')){
			break;
		}

		App::env->end();
	}
}
