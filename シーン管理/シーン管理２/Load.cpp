
#include "Load.h"

enum
{
	START_BGM,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//������
Load::Load()
{
	scene_switch = START_BGM;
	end_decision = false;
}

//���[�h��ʓ��̏���
void Load::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START_BGM:
		//--BGM�J�n�����͂���

		scene_switch = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//--�t�F�[�h�������ʂ��؂�ւ��Ƃ��̉��o�̏����͂���
		//--BGM�����[�v������Ƃ��͂���

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--���[�h��ʓ��̃��C������

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--̪��ޏ�����BGM��~�����͂���

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
		//--�`��͊�{�����ɏ���������

		break;
	//-----------------------------------------//
	case FADE_OUT:


		break;
	//-----------------------------------------//
	}
}

//���������㏉�����p�֐�
void Load::Reset()
{
	scene_switch = START_BGM;
	end_decision = false;
}