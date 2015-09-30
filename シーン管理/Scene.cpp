
#include "Scene.h"

Scene::Scene()
{
	//シーンを切り替える変数。入れ替えることによって、
	//最初に処理する順番を変えられる
	scene_switch = TITLE;
}

//処理の更新
void Scene::Update()
{
	switch (scene_switch)
	{
	//-------------------------------//
	case TITLE:
		_title.Update();
		if (_title.end_decision == true)
		{
			scene_switch = LOAD;
			_title.Reset();
		}
		
		break;
	//-------------------------------//
	case LOAD:
		_load.Update();
		if (_load.end_decision == true)
		{
			scene_switch = MAIN;
			_load.Reset();
		}

		break;
	//-------------------------------//
	case MAIN:
		_game.Update();
		if (_game.end_decision == true)
		{
			scene_switch = RESULT;
			_game.Reset();
		}

		break;
	//-------------------------------//
	case RESULT:
		_result.Update();
		if (_result.end_decision == true)
		{
			scene_switch = TITLE;
			_result.Reset();
		}
		break;
	}
	std::cout << scene_switch << std::endl;
}

void Scene::Draw()
{
	switch (scene_switch)
	{
	//-------------------------------//
	case TITLE:
		_title.Draw();

		break;
	//-------------------------------//
	case LOAD:
		_load.Draw();

		break;
	//-------------------------------//
	case MAIN:
		_game.Draw();

		break;
	//-------------------------------//
	case RESULT:
		_result.Draw();

		break;
	//-------------------------------//
	}
}