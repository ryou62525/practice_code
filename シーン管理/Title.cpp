
#include "Title.h"



//������
Title::Title():
font("res/meiryo.ttc")
{
	key_color = Color(1, 1, 1, 1);
	font.size(50);

	scene_type = START;

	end_decision = false;
	start_flug = false;
	end_flug = false;
}

//�^�C�g����ʓ��̏���
void Title::Update()
{
	switch (scene_type)
	{
	//-----------------------------------------//
	case START:
		//--BGM�J�n����
		scene_type = FADE_IN;
		break;
	//-----------------------------------------//
	case FADE_IN:
		//���t�F�[�h�����A��ʐ؂�ւ��̎��̉��o����
		//--BGM�̃��[�v����

		if (_fade.fadeIn(0.02f, 0, 0, 0))
		{
			scene_type = MAIN_PROCE;
		}

		break;
	//-----------------------------------------//
	case MAIN_PROCE:
		//--�^�C�g����ʓ��̃��C������

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

void Title::Draw()
{
	keyStaging(); 
	font.draw("TITLE", Vec2f(-100, 50), Color::white);
	font.draw("PRESS ENTER KEY", Vec2f(-220, -150), key_color);
	_fade.Draw();
}

void Title::keyStaging()
{
	if (key_color.a() >= 1)
	{
		start_flug = true;
		end_flug = false;
	}
	if (key_color.a() <= 0.01)
	{
		end_flug = true;
		start_flug = false;
	}

	if (start_flug == true)
	{
		key_color.a() -= 0.02;
	}
	if (end_flug == true)
	{
		key_color.a() += 0.02;
	}
}

//���������㏉�����p�֐�
void Title::Reset()
{
	key_color = Color(1, 1, 1, 1);
	scene_type = START;
	end_decision = false;
	start_flug = false;
	end_flug = false;
}