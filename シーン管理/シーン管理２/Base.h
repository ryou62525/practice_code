//---------------------------------------------//
//				 元になるファイル				   //
//---------------------------------------------//
#pragma once

#include "lib/framework.hpp"
#include "lib/appEnv.hpp"
#include <memory>
#include <iostream>
#include <string>
#include <iomanip>

enum Window 
{
	WIDTH = 512,
	HEIGHT = 512
};

//AppEnvのクラス定義及びシェアードポインタの設定
//Appのクラス定義のみ頭にｃをつけ検索をかけやすくする
class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> app_env;
};