#include "Player.h"

Player::Player()
{
	color = Color(1, 1, 1, 1);
	pos = Vec2f(100, 100);
	size = Vec2f(32, 32);
}

void Player::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), color);
}


