//---------------------------------------------//
//					 �^�C�g��				       //
//---------------------------------------------//
#pragma once
#include "Common.h"

class Title
{
private:
	
	Color key_color;
	Font font;
	Fade _fade;

	SceneType scene_type;
	
	bool start_flug;
	bool end_flug;
	bool start_display;

public:

	Title();				//�������p�R���X�g���N�^

	void Update();			//�����p�֐��̒�`
	void Draw();			//�`��p�֐��̒�`
	void Reset();			//����������̏������p�֐��̒�`
	void keyStaging();
	
	bool  end_decision;		//�����������A����p�̕ϐ���`

};