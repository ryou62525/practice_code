//---------------------------------------------//
//					 �^�C�g��					   //
//---------------------------------------------//
#pragma once
#include "Base.h"

class Title
{
private:

	int scene_switch;		//�V�[���؂�ւ��p�ϐ�

public:

	Title();				//�������p�R���X�g���N�^

	void Update();			//�����p�֐��̒�`
	void Draw();			//�`��p�֐��̒�`
	void Reset();			//����������̏������p�֐��̒�`
	
	bool  end_decision;		//�����������A����p�̕ϐ���`

};