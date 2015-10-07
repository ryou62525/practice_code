
#include "Window.h"
#include "Object.h"

int main() {

	AppEnv env(Window::WIDTH, Window::HEIGHT);

	//objectのメモリ領域を確保
	Object* object = new Object;
	
	//ここでobjectのステータスを初期化
	object->pos_x = 0;
	object->pos_y = 0;
	object->size = 10;
	object->speed = 2;

	while (env.isOpen()) {

		ObjectMover(env, object);

		env.begin();

		ObjectDraw(object);


		env.end();
	}
}
