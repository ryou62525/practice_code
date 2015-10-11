
#include "lib/framework.hpp"
#include "Window.h"
#include "Header.h"

int main() {

	AppEnv env(Window::WIDTH, Window::HEIGHT);

	Test _test;

	while (env.isOpen()) {

		_test.update(env);

		env.begin();


		_test.draw();


		env.end();
	}
}
