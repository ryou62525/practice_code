
#include "Character.h"

Character::Character()
{
	pos = Vec2f(0, 0);
	size = Vec2f(32,32);
	speed = 5;
}

void Character::Move(AppEnv env)
{
	if (env.isPressKey('A'))
	{
		pos.x() -= speed;
	}

	if (env.isPressKey('S'))
	{
		pos.x() += speed;
	}
}