
#pragma once

#include "lib\framework.hpp"

struct Player
{
	Vec2f pos;		//�v���C���[�̃|�W�V����
	Vec2f size;		//�v���C���[�̃T�C�Y
};

float PlayerMover(AppEnv& env, Player& player);  //��ڲ԰�̈ړ������p�̊֐�
void PlayerDraw(Player& player);   //��ڲ԰�̕`�揈���̊֐�