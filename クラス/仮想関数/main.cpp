
#include "lib/framework.hpp"
#include "Window.h"
#include "Test.h"

int main() {

	num *ptr[3];

	hoge hoge_obj;
	huga huga_obj;
	piyo piyo_obj;

	ptr[0] = &hoge_obj;
	ptr[1] = &huga_obj;
	ptr[2] = &piyo_obj;
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);

  while (env.isOpen()) {

    env.begin();


	for (int i = 0; i < 3; ++i)
	{
		ptr[i]->Draw();
	}


    env.end();
  }
}
