
#include "Result.h"

enum
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//初期化
Result::Result()
{
	scene_switch = START;
	end_decision = false;
}

//リザルト画面内の処理
void Result::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START:
		//--BGM開始処理はここ

		break;
	//-----------------------------------------//
	case FADE_IN:
		//--フェード処理や画面が切り替わるときの演出の処理はここ
		//--BGMをループさせるときはここ

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--リザルト画面内のメイン処理

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--ﾌｪｰﾄﾞ処理とBGM停止処理はここ

		break;
	//-----------------------------------------//
	}
}

void Result::Draw()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START:


		break;
	//-----------------------------------------//
	case FADE_IN:


		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--描画は基本ここに処理をかく

		break;
	//-----------------------------------------//
	case FADE_OUT:


		break;
	//-----------------------------------------//
	}
}

//処理完了後初期化用関数
void Result::Reset()
{
	scene_switch = START;
	end_decision = false;
}