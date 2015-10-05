
#include "lib/framework.hpp"
#include "Window.h"
#include "Player.h"

int main() {
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);

  Player player
  {
	  Vec2f(0, 0),
	  Vec2f(50, 50),
  };

  while (env.isOpen()) {

	  PlayerMover(env, player);

    env.begin();

	PlayerDraw(player);



    env.end();
  }
}
