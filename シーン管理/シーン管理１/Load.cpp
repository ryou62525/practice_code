
#include "Load.h"

Load::Load() :
font("res/meiryo.ttc")
{
	scene_type = START;
	end_decision = false;
	font.size(50);
}

//���[�h��ʓ��̏���
void Load::Update()
{
	switch (scene_type)
	{
	//-----------------------------------------//
	case START:
		//--BGM�J�n�����͂���

		scene_type = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//--�t�F�[�h�������ʂ��؂�ւ��Ƃ��̉��o�̏����͂���
		//--BGM�����[�v������Ƃ��͂���
		if (_fade.fadeIn(0.02f, 0, 0, 0))
		{
			scene_type = MAIN_PROCE;
		}

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--���[�h��ʓ��̃��C������

		if (cApp::app_env->isPushKey(GLFW_KEY_ENTER))
		{
			scene_type = FADE_OUT;
		}

		break;
	//-----------------------------------------//
	case FADE_OUT:
		//--̪��ޏ�����BGM��~�����͂���
		if (_fade.fadeOut(0.02f, 0, 0, 0))
		{
			end_decision = true;
		}

		break;
	//-----------------------------------------//
	}
}

void Load::Draw()
{
	font.draw("LOAD", Vec2f(-100, 50), Color::white);
	_fade.Draw();
}


//���������㏉�����p�֐�
void Load::Reset()
{
	scene_type = START;
	end_decision = false;
}