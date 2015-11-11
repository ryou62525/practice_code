
#include "lib/framework.hpp"
#include "Window.h"
#include "App.h"
#include "block.h"
#include "player.h"

std::shared_ptr<AppEnv> cApp::env;

static bool isHitCollision(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	return (pos1.x() + size1.x() >= pos2.x() && pos1.x() <= pos2.x() + size2.x()
		&& pos1.y() + size1.y() >= pos2.y() && pos1.y() <= pos2.y() + size2.y());
}

int main() {
 
	cApp::env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	Player player;
	Block block;

  while (cApp::env->isOpen()) {

	  player.update();
	  block.update();

	  cApp::env->begin();

	  if (isHitCollision(player.getPos(), player.getSize(), block.getPos(), block.getSize()))
	  {
		  block.setColor(Color::green);
	  }
	  else
	  {
		  block.setColor(Color::blue);
	  }

	  player.draw();
	  block.draw();


	  cApp::env->end();
  }
}
