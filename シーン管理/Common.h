//---------------------------------------------//
//				 元になるファイル				   //
//---------------------------------------------//
#pragma once

#include "lib/framework.hpp"
#include "lib/appEnv.hpp"
#include <memory>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Fade.h"

enum Window
{
	WIDTH = 512,
	HEIGHT = 512
};

enum SceneType
{
	START,
	FADE_IN,
	MAIN_PROCE,
	FADE_OUT
};

//AppEnvのクラス定義及びシェアードポインタの設定
//Appのクラス定義のみ頭にｃをつけ検索をかけやすくする
class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> app_env;
};

/*			命名規則
*	
*	ローカル変数：スネークケース
*	グローバル変数：スネークケース
*	関数：スネークケース
*	クラス：パスカルケース
*	構造体：パスカルケース
*	列挙体：パスカルケース
*	定数：大文字スネーク
*
*/