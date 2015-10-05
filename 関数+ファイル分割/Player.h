
#pragma once

#include "lib\framework.hpp"

struct Player
{
	Vec2f pos;		//プレイヤーのポジション
	Vec2f size;		//プレイヤーのサイズ
};

float PlayerMover(AppEnv& env, Player& player);  //ﾌﾟﾚｲﾔｰの移動処理用の関数
void PlayerDraw(Player& player);   //ﾌﾟﾚｲﾔｰの描画処理の関数