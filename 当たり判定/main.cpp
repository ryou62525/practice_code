

#include "Window.h"
#include "Scene.h"

int main() {
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);
  Scene _scene;

  while (env.isOpen()) {

	  _scene.Update(env);

    env.begin();

	_scene.Draw();



    env.end();
  }
}
