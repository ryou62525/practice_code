
#include "lib/framework.hpp"
#include "Window.h"
#include "Player.h"
#include "lib\appEnv.hpp"

int main() {
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);

  Player _player;

  while (env.isOpen()) {

	env.begin();

	_player.Draw();


    env.end();
  }
}
