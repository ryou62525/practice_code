#pragma once
#include "lib\framework.hpp"
#include "lib\appEnv.hpp"

struct Object
{
	int pos_x;
	int pos_y;
	int size;
	int speed;
};

void ObjectMover(AppEnv& env, Object* object);
void ObjectDraw(Object* object);