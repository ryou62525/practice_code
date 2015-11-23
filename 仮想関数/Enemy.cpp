#include "Enemy.h"

enemyOne::enemyOne(Vec2f pos, Vec2f size)
{
	this->pos = pos;
	this->size = size;
	movement = 3.0f;
}

void enemyOne::update()
{
	if (cApp::env->isPressKey('S')){ pos.x() += movement; }
	if (cApp::env->isPressKey('A')){ pos.x() -= movement; }
}

void enemyOne::draw()
{
	drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), 0, 0, 512, 512, img1);
}



enemyTwo::enemyTwo(Vec2f pos, Vec2f size)
{
	this->pos = pos;
	this->size = size;
	movement = 3.0f;
}

void enemyTwo::update()
{
	if (cApp::env->isPressKey('F')){ pos.x() += movement; }
	if (cApp::env->isPressKey('D')){ pos.x() -= movement; }
}

void enemyTwo::draw()
{
	drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), 0, 0, 512, 512, img2);
}