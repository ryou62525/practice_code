
#include "Scene.h"

Scene::Scene()
{
	//�V�[����؂�ւ���ϐ��B����ւ��邱�Ƃɂ���āA
	//�ŏ��ɏ������鏇�Ԃ�ς�����
	scene_switch = TITLE;
}

//�����̍X�V
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