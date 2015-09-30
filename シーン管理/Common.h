//---------------------------------------------//
//				 ���ɂȂ�t�@�C��				   //
//---------------------------------------------//
#pragma once

#include "lib/framework.hpp"
#include "lib/appEnv.hpp"
#include <memory>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Fade.h"

enum Window
{
	WIDTH = 512,
	HEIGHT = 512
};

enum SceneType
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//AppEnv�̃N���X��`�y�уV�F�A�[�h�|�C���^�̐ݒ�
//App�̃N���X��`�̂ݓ��ɂ����������������₷������
class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> app_env;
};

/*			�����K��
*	
*	���[�J���ϐ��F�X�l�[�N�P�[�X
*	�O���[�o���ϐ��F�X�l�[�N�P�[�X
*	�֐��F�X�l�[�N�P�[�X
*	�N���X�F�p�X�J���P�[�X
*	�\���́F�p�X�J���P�[�X
*	�񋓑́F�p�X�J���P�[�X
*	�萔�F�啶���X�l�[�N
*
*/