
#pragma once
#include "Common.h"

enum Direction
{
	MOVE_RIGHT,
	MOVE_LEFT,
	MOVE_UP,
	MOVE_DOWN,
	MOVE_DEFAULT
};

struct Status
{
	int HP;		//ヒットポイント
	int MP;		//マジックポイント

	int ATK;	//攻撃力
	int DEF;	//防御力
	int AGI;	//素早さ
};

class Objct
{
public:

	void Update();
	void Draw();
	void Reset();

	float pos_x;
	float pos_y;
	float size_x;
	float size_y;
	float move_speed;

	Status state;

};