//---------------------------------------------//
//					 ���U���g					   //
//---------------------------------------------//
#pragma once
#include "Common.h"

class Result
{
private:

	Font font;
	Fade _fade;

	SceneType scene_type;

public:

	Result();				//�������p�R���X�g���N�^

	void Update();			//�����p�֐��̒�`
	void Draw();			//�`��p�֐��̒�`
	void Reset();			//����������̏������p�֐��̒�`

	bool  end_decision;		//�����������A����p�̕ϐ���`

};