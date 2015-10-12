
#include "lib/framework.hpp"
#include "Window.h"
#include "Common.h"
#include "Player.h"

std::shared_ptr<AppEnv> cApp::app_env;

int main() {
 
	cApp::app_env =
		std::make_shared<AppEnv>(Window::WIDTH, Window::HEIGHT);

	Player _player;

  while (cApp::app_env->isOpen()) {

	  _player.Update();

	  cApp::app_env->begin();

	  _player.Draw();



    
	  cApp::app_env->end();
  }
}
