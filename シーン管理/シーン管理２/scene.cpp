
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
	//�V�[����؂�ւ���ϐ��B����ւ��邱�Ƃɂ���āA
	//�ŏ��ɏ������鏇�Ԃ�ς�����
	scene_switch = TITLE;
}

//�����̍X�V
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