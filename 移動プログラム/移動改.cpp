
#include "lib/framework.hpp"

enum Window 
{
  WIDTH  = 512,
  HEIGHT = 512
};

struct Player
{
	int pos_x, pos_y;
	int size_x, size_y;
	int speed;

	bool RIGHT;
	bool LEFT;
	bool UP;
	bool DOWN;
};

Player player
{
	0, 0,
	20, 20,
	1,
	false,
	false,
	false,
	false
};

int Move(AppEnv& env) 
{
	//-------------------------------------------------------------------------
	if (env.isPressKey('S') && player.LEFT == false 
		&& player.UP == false && player.DOWN == false)
	{
		player.pos_x += player.speed;
		player.RIGHT = true;
		return player.pos_x;
	}
	if (env.isPullKey('S'))
	{
		player.RIGHT = false;
	}
	//-------------------------------------------------------------------------
	if (env.isPressKey('A') && player.RIGHT == false 
		&& player.UP == false && player.DOWN == false)
	{
		player.pos_x -= player.speed;
		player.LEFT = true;
		return player.pos_x;
	}

	if (env.isPullKey('A'))
	{
		player.LEFT = false;
	}
	//-------------------------------------------------------------------------
	if (env.isPressKey('W') && player.RIGHT == false 
		&& player.LEFT == false && player.DOWN == false)
	{
		player.pos_y += player.speed;
		player.UP = true;
		return player.pos_y;
	}
	if (env.isPullKey('W'))
	{
		player.UP = false;
	}
	//-------------------------------------------------------------------------
	if (env.isPressKey('Z') && player.RIGHT == false 
		&& player.LEFT == false && player.UP == false)
	{
		player.pos_y -= player.speed;
		player.DOWN = true;
		return player.pos_y;
	}
	if (env.isPullKey('Z'))
	{
		player.DOWN = false;
	}
	//-------------------------------------------------------------------------
}

int main() 
{

  AppEnv env(Window::WIDTH, Window::HEIGHT);

  while (env.isOpen()) 
  {
	  Move(env);

    env.begin();
    
	drawFillBox(player.pos_x, player.pos_y, player.size_x, player.size_y, Color::red);

	if (env.isPushKey('Q')){break;}

    env.end();
  }
}
