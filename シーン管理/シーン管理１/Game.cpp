
#include "Game.h"

Game::Game():
font("res/meiryo.ttc")
{
	font.size(50);

	scene_type = START;
	end_decision = false;
}

// アップデートする処理はここに記述すること
void Game::Update()
{
	switch(scene_type)
	{
	case START:

		scene_type = FADE_IN;
		break;
	case FADE_IN:

		if (_fade.fadeIn(0.02f, 0, 0, 0))
		{
			scene_type = MAIN_PROCE;
		}
		break;
	case MAIN_PROCE:

		if (cApp::app_env->isPushKey(GLFW_KEY_ENTER))
		{
			scene_type = FADE_OUT;
		}
		break;
	case FADE_OUT:

		if (_fade.fadeOut(0.02f, 0, 0, 0))
		{
			end_decision = true;
		}
		break;
	}
}

// 描画処理ここに記述すること
void Game::Draw()
{
	font.draw("GAME", Vec2f(-100, 50), Color::white);
	_fade.Draw();
}

void Game::Reset()
{
	scene_type = START;
	end_decision = false;
}