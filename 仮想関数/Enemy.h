#pragma once
#include "App.h"
#include "lib/framework.hpp"

class Enemy
{
public:

	virtual void draw()=0;
	virtual void update()=0;

	Vec2f pos;
	Vec2f size;
	float movement;

};

class enemyOne : public Enemy
{
public:

	enemyOne(Vec2f pos, Vec2f size);
	void draw();
	void update();

private:

	Texture img1 = Texture("res/enemy1.png");

};

class enemyTwo : public Enemy
{
public:

	enemyTwo(Vec2f pos, Vec2f size);
	void draw();
	void update();

private:

	Texture img2 = Texture("res/enemy2.png");

};