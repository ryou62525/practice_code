//---------------------------------------------//
//					 リザルト					   //
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

	Result();				//初期化用コンストラクタ

	void Update();			//処理用関数の定義
	void Draw();			//描画用関数の定義
	void Reset();			//処理完了後の初期化用関数の定義

	bool  end_decision;		//処理完了時、判定用の変数定義

};