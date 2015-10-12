
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
	int HP;		//�q�b�g�|�C���g
	int MP;		//�}�W�b�N�|�C���g

	int ATK;	//�U����
	int DEF;	//�h���
	int AGI;	//�f����
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