
#include "Title.h"

enum
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//初期化
Title::Title()
{
	scene_switch = START;
	end_decision = false;
}

//タイトル画面内の処理
void Title::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START:
		//--BGM開始処理

		break;
	//-----------------------------------------//
	case FADE_IN:
		//ｰｰフェード処理、画面切り替えの時の演出処理
		//--BGMのループ処理

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--タイトル画面内のメイン処理

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--ﾌｪｰﾄﾞ処理とBGM停止処理はここ

		break;
	//-----------------------------------------//
	}
}

void Title::Draw()
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
void Title::Reset()
{
	scene_switch = START;
	end_decision = false;
}