#include "block.h"

Block::Block()
{
	pos = Vec2f(100, 100);
	size = Vec2f(32, 32);
	key_color = Color::blue;
}

void Block::update()
{

}

void Block::setColor(Color color)
{
	key_color = color;
}

void Block::draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), key_color);
}

Vec2f Block::getPos()
{
	return pos;
}

Vec2f Block::getSize()
{
	return size;
}