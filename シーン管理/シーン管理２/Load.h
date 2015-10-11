//---------------------------------------------//
//					 ロード画面				   //
//---------------------------------------------//
#pragma once
#include "Base.h"

class Load
{
private:

	int scene_switch;	//シーン切り替え用変数

public:

	Load();				//初期化用コンストラクタ

	void Update();		//処理用関数の定義
	void Draw();		//描画用関数の定義
	void Reset();		//処理完了後の初期化用関数の定義

	bool end_decision;	//処理完了時、判定用の変数定義

};