
#include "scene.h"

enum
{
	TITLE,
	LOAD,
	MAIN,
	BATTLE,
	GAMEOVER,
	GAMEEND
};

Batch::Batch()
{
	//シーンを切り替える変数。入れ替えることによって、
	//最初に処理する順番を変えられる
	scene_switch = TITLE;
}

//処理の更新
void Batch::Update()
{
	switch (scene_switch)
	{
	//-------------------------------//
	case TITLE:
		
		
		break;
	//-------------------------------//
	case LOAD:


		break;
	//-------------------------------//
	case MAIN:


		break;
	//-------------------------------//
	case BATTLE:


		break;
	//-------------------------------//
	case GAMEOVER:


		break;
	//-------------------------------//
	case GAMEEND:


		break;
	//-------------------------------//
	}
}

void Batch::Draw()
{
	switch (scene_switch)
	{
	//-------------------------------//
	case TITLE:


		break;
	//-------------------------------//
	case LOAD:


		break;
	//-------------------------------//
	case MAIN:


		break;
	//-------------------------------//
	case BATTLE:


		break;
	//-------------------------------//
	case GAMEOVER:


		break;
	//-------------------------------//
	case GAMEEND:


		break;
	//-------------------------------//
	}
}