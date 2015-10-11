//---------------------------------------------//
//				 ���ɂȂ�t�@�C��				   //
//---------------------------------------------//
#pragma once

#include "lib/framework.hpp"
#include "lib/appEnv.hpp"
#include <memory>
#include <iostream>
#include <string>
#include <iomanip>

enum Window 
{
	WIDTH = 512,
	HEIGHT = 512
};

//AppEnv�̃N���X��`�y�уV�F�A�[�h�|�C���^�̐ݒ�
//App�̃N���X��`�̂ݓ��ɂ����������������₷������
class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> app_env;
};