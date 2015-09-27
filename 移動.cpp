
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
};

Player player
{
	0, 0,
	20, 20,
	1
};

int Move(AppEnv& env) 
{
	if (env.isPressKey('S')) 
	{
		player.pos_x += player.speed;
		return player.pos_x;
	}

	if (env.isPressKey('A'))
	{
		player.pos_x -= player.speed;
		return player.pos_x;
	}

	if (env.isPressKey('W'))
	{
		player.pos_y += player.speed;
		return player.pos_y;
	}
	
	if (env.isPressKey('Z'))
	{
		player.pos_y -= player.speed;
		return player.pos_y;
	}
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
