//---------------------------------------------//
//					 ���[�h���				   //
//---------------------------------------------//
#pragma once
#include "Common.h"

class Load
{
private:

	SceneType scene_type;

	Fade _fade;
	Font font;

public:

	Load();				//�������p�R���X�g���N�^

	void Update();		//�����p�֐��̒�`
	void Draw();		//�`��p�֐��̒�`
	void Reset();		//����������̏������p�֐��̒�`

	bool end_decision;	//�����������A����p�̕ϐ���`

};