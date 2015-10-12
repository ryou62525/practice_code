
#include "Player.h"

Player::Player()
{
	pos_x = 0.0f;
	pos_y = 0.0f;
	size_x = 32.0f;
	size_y = 32.0f;
	move_speed = 3.0f;
}

void Player::Update()
{

	if (cApp::app_env->isPressKey(GLFW_KEY_RIGHT))
	{
		move_dir = MOVE_RIGHT;
	}
	if (cApp::app_env->isPressKey(GLFW_KEY_LEFT))
	{
		move_dir = MOVE_LEFT;
	}
	if (cApp::app_env->isPressKey(GLFW_KEY_UP))
	{
		move_dir = MOVE_UP;
	}
	if (cApp::app_env->isPressKey(GLFW_KEY_DOWN))
	{
		move_dir = MOVE_DOWN;
	}
	if (cApp::app_env->isPressKey(GLFW_KEY_RIGHT) != true && cApp::app_env->isPressKey(GLFW_KEY_LEFT) != true &&
		cApp::app_env->isPressKey(GLFW_KEY_UP) != true && cApp::app_env->isPressKey(GLFW_KEY_DOWN) != true)
	{
		move_dir = MOVE_DEFAULT;
	}

	switch (move_dir)
	{
	case MOVE_RIGHT:

		pos_x += move_speed;

		break;
	case MOVE_LEFT:

		pos_x -= move_speed;

		break;
	case MOVE_UP:

		pos_y += move_speed;

		break;
	case MOVE_DOWN:

		pos_y -= move_speed;

		break;
	case MOVE_DEFAULT:

		break;
	}

}

void Player::Draw()
{
	drawFillBox(pos_x, pos_y, size_x, size_y, Color::red);
}

void Player::Reset()
{

}