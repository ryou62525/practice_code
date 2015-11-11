#pragma once
#include "lib/framework.hpp"
#include "App.h"

class Player
{
public:

	Player();
	void draw();
	void update();

	Vec2f getPos();
	Vec2f getSize();

private:

	Vec2f pos;
	Vec2f size;
	float speed;

};