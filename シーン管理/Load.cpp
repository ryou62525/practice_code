
#include "Load.h"

Load::Load() :
font("res/meiryo.ttc")
{
	scene_type = START;
	end_decision = false;
	font.size(50);
}

//ロード画面内の処理
void Load::Update()
{
	switch (scene_type)
	{
	//-----------------------------------------//
	case START:
		//--BGM開始処理はここ

		scene_type = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//--フェード処理や画面が切り替わるときの演出の処理はここ
		//--BGMをループさせるときはここ
		if (_fade.fadeIn(0.02f, 0, 0, 0))
		{
			scene_type = MAIN_PROCE;
		}

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--ロード画面内のメイン処理

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

void Load::Draw()
{
	font.draw("LOAD", Vec2f(-100, 50), Color::white);
	_fade.Draw();
}


//処理完了後初期化用関数
void Load::Reset()
{
	scene_type = START;
	end_decision = false;
}