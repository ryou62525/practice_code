
#include "Result.h"

//������
Result::Result():
font("res/meiryo.ttc")
{
	font.size(50);

	scene_type = START;
	end_decision = false;
}

//���U���g��ʓ��̏���
void Result::Update()
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
		//--���U���g��ʓ��̃��C������
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

void Result::Draw()
{
	font.draw("���U���g", Vec2f(-100, 50), Color::white);
	_fade.Draw();
	
}

//���������㏉�����p�֐�
void Result::Reset()
{
	scene_type = START;
	end_decision = false;
}