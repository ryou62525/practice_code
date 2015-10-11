
#include "Load.h"

enum
{
	START_BGM,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//初期化
Load::Load()
{
	scene_switch = START_BGM;
	end_decision = false;
}

//ロード画面内の処理
void Load::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START_BGM:
		//--BGM開始処理はここ

		scene_switch = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//--フェード処理や画面が切り替わるときの演出の処理はここ
		//--BGMをループさせるときはここ

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--ロード画面内のメイン処理

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--ﾌｪｰﾄﾞ処理とBGM停止処理はここ

		break;
	//-----------------------------------------//
	}
}

void Load::Draw()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START_BGM:


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
void Load::Reset()
{
	scene_switch = START_BGM;
	end_decision = false;
}