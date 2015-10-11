#pragma once
#include "lib\framework.hpp"

enum Scene
{
	PLAYER_RIGHT,
	PLAYER_LEFT,
	PLAYER_UP,
	PLAYER_DOWN
};


struct Player
{
	float pos_x;
	float pos_y;

	float size_x;
	float size_y;

	float speed;
};

class Test
{

private:

	Scene scene;
	Player player;

public:

	Test();
	void update(AppEnv& env);
	void reset();
	void draw();

};