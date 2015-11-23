#include <list>
#include "lib/framework.hpp"
#include "Window.h"
#include "App.h"
#include "Enemy.h"

std::shared_ptr<AppEnv> cApp::env;

int main() {
 
	cApp::env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	std::list<Enemy*> enemy;

  while (cApp::env->isOpen()) {

	  cApp::env->begin();

	  if (cApp::env->isPushKey('Q')){
		  enemy.push_back(new enemyOne(Vec2f(0, 0), Vec2f(32, 32)));
	  }

	  if (cApp::env->isPushKey('W')){
		  enemy.push_back(new enemyTwo(Vec2f(100, 100), Vec2f(32, 32)));
	  }

	  std::list<Enemy*>::iterator it = enemy.begin();

	  while (it != enemy.end()){
		  (*it)->update();
		  (*it)->draw();
		  it++;
	  }

	  cApp::env->end();
  }
}
