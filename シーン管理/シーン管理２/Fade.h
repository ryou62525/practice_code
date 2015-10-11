//---------------------------------------------//
//				�@�`��p�G�t�F�N�g			   //
//---------------------------------------------//

#pragma once
#include "Base.h"

class Fade
{
private:
	Texture fade_tex;
	Color fade_color;

public:

	void Draw();
	void Reset();

	Fade();

	//�t�F�[�h�C������
	bool fadeIn(float speed,
		float red, float green, float blue);
	
	//�t�F�[�h�A�E�g����
	bool fadeOut(float speed,
		float red, float green, float blue);

};