
#include "Result.h"

enum
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//������
Result::Result()
{
	scene_switch = START;
	end_decision = false;
}

//���U���g��ʓ��̏���
void Result::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START:
		//--BGM�J�n�����͂���

		break;
	//-----------------------------------------//
	case FADE_IN:
		//--�t�F�[�h�������ʂ��؂�ւ��Ƃ��̉��o�̏����͂���
		//--BGM�����[�v������Ƃ��͂���

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--���U���g��ʓ��̃��C������

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--̪��ޏ�����BGM��~�����͂���

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
		//--�`��͊�{�����ɏ���������

		break;
	//-----------------------------------------//
	case FADE_OUT:


		break;
	//-----------------------------------------//
	}
}

//���������㏉�����p�֐�
void Result::Reset()
{
	scene_switch = START;
	end_decision = false;
}