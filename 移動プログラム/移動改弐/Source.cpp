
#include "Header.h"

Test::Test()
{
	scene = PLAYER_UP;
	player.pos_x = 0;
	player.pos_y = 0;
	player.size_x = 32;
	player.size_y = 32;
	player.speed = 4.0f;
}

void Test::update(AppEnv& env)
{

	if (env.isPushKey(GLFW_KEY_UP))
	{
		scene = PLAYER_UP;
	}
	if (env.isPushKey(GLFW_KEY_DOWN))
	{
		scene = PLAYER_DOWN;
	}
	if (env.isPushKey(GLFW_KEY_RIGHT))
	{
		scene = PLAYER_RIGHT;
	}
	if (env.isPushKey(GLFW_KEY_LEFT))
	{
		scene = PLAYER_LEFT;
	}


	switch (scene)
	{
	case PLAYER_UP:
		player.pos_y += player.speed;
	
		break;
	case PLAYER_DOWN:
		player.pos_y -= player.speed;

		break;
	case PLAYER_RIGHT:
		player.pos_x += player.speed;

		break;
	case PLAYER_LEFT:
		player.pos_x -= player.speed;

		break;
	}
}

void Test::draw()
{
	drawFillBox(player.pos_x, player.pos_y, player.size_x, player.size_y, Color::red);
}