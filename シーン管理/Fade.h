//---------------------------------------------//
//				　描画用エフェクト			   //
//---------------------------------------------//

#pragma once
#include "Common.h"

class Fade
{
private:
	Texture fade_tex;
	Color fade_color;

public:

	void Draw();
	void Reset();

	Fade();

	//フェードイン処理
	bool fadeIn(float speed,
		float red, float green, float blue);
	
	//フェードアウト処理
	bool fadeOut(float speed,
		float red, float green, float blue);

};