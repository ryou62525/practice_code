#pragma once
#include"lib/framework.hpp"
#include "App.h"

class Block
{
public:

	Block();
	void update();
	void draw();
	void setColor(Color color);

	Vec2f getPos();
	Vec2f getSize();

private:

	Vec2f pos;
	Vec2f size;
	Color key_color;
};
