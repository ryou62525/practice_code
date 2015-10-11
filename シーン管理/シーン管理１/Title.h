//---------------------------------------------//
//					 タイトル				       //
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

	Title();				//初期化用コンストラクタ

	void Update();			//処理用関数の定義
	void Draw();			//描画用関数の定義
	void Reset();			//処理完了後の初期化用関数の定義
	void keyStaging();
	
	bool  end_decision;		//処理完了時、判定用の変数定義

};