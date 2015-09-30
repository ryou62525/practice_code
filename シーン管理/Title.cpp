
#include "Title.h"



//初期化
Title::Title():
font("res/meiryo.ttc")
{
	key_color = Color(1, 1, 1, 1);
	font.size(50);

	scene_type = START;

	end_decision = false;
	start_flug = false;
	end_flug = false;
}

//タイトル画面内の処理
void Title::Update()
{
	switch (scene_type)
	{
	//-----------------------------------------//
	case START:
		//--BGM開始処理
		scene_type = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//ｰｰフェード処理、画面切り替えの時の演出処理
		//--BGMのループ処理

		if (_fade.fadeIn(0.02f, 0, 0, 0))
		{
			scene_type = MAIN_PROCE;
		}

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--タイトル画面内のメイン処理

		if (cApp::app_env->isPushKey(GLFW_KEY_ENTER))
		{
			scene_type = FADE_OUT;
		}

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--ﾌｪｰﾄﾞ処理とBGM停止処理はここ

		if (_fade.fadeOut(0.02f, 0, 0, 0))
		{
			end_decision = true;
		}

		break;
	//-----------------------------------------//
	}
}

void Title::Draw()
{
	keyStaging(); 
	font.draw("TITLE", Vec2f(-100, 50), Color::white);
	font.draw("PRESS ENTER KEY", Vec2f(-220, -150), key_color);
	_fade.Draw();
}

void Title::keyStaging()
{
	if (key_color.a() >= 1)
	{
		start_flug = true;
		end_flug = false;
	}
	if (key_color.a() <= 0.01)
	{
		end_flug = true;
		start_flug = false;
	}

	if (start_flug == true)
	{
		key_color.a() -= 0.02;
	}
	if (end_flug == true)
	{
		key_color.a() += 0.02;
	}
}

//処理完了後初期化用関数
void Title::Reset()
{
	key_color = Color(1, 1, 1, 1);
	scene_type = START;
	end_decision = false;
	start_flug = false;
	end_flug = false;
}