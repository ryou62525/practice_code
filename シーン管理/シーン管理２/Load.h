//---------------------------------------------//
//					 ���[�h���				   //
//---------------------------------------------//
#pragma once
#include "Base.h"

class Load
{
private:

	int scene_switch;	//�V�[���؂�ւ��p�ϐ�

public:

	Load();				//�������p�R���X�g���N�^

	void Update();		//�����p�֐��̒�`
	void Draw();		//�`��p�֐��̒�`
	void Reset();		//����������̏������p�֐��̒�`

	bool end_decision;	//�����������A����p�̕ϐ���`

};