
#include "Title.h"

enum
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//������
Title::Title()
{
	scene_switch = START;
	end_decision = false;
}

//�^�C�g����ʓ��̏���
void Title::Update()
{
	switch (scene_switch)
	{
	//-----------------------------------------//
	case START:
		//--BGM�J�n����

		break;
	//-----------------------------------------//
	case FADE_IN:
		//���t�F�[�h�����A��ʐ؂�ւ��̎��̉��o����
		//--BGM�̃��[�v����

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--�^�C�g����ʓ��̃��C������

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--̪��ޏ�����BGM��~�����͂���

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
		//--�`��͊�{�����ɏ���������

		break;
	//-----------------------------------------//
	case FADE_OUT:


		break;
	//-----------------------------------------//
	}
}

//���������㏉�����p�֐�
void Title::Reset()
{
	scene_switch = START;
	end_decision = false;
}