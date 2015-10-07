
#include "Object.h"

void ObjectMover(AppEnv& env, Object* object)
{
	if (env.isPressKey('S')){ object->pos_x += object->speed; }
	if (env.isPressKey('A')){ object->pos_x -= object->speed; }
}

void ObjectDraw(Object* object)
{
	drawFillBox(object->pos_x, object->pos_y, object->size, object->size, Color::red);
}