#include "player.h"

Player::Player()
{
	pos = Vec2f::Zero();
	size = Vec2f(32, 32);
	speed = 3.0f;
}

void Player::update()
{
	if (cApp::env->isPressKey(GLFW_KEY_RIGHT))pos.x() += speed;
	if (cApp::env->isPressKey(GLFW_KEY_LEFT))pos.x() -= speed;
	if (cApp::env->isPressKey(GLFW_KEY_UP))pos.y() += speed;
	if (cApp::env->isPressKey(GLFW_KEY_DOWN))pos.y() -= speed;
}

void Player::draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::red);
}

Vec2f Player::getPos()
{
	return pos;
}

Vec2f Player::getSize()
{
	return size;
}