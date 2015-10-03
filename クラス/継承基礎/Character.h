
#include "lib\framework.hpp"
#pragma once


class Character

{
public:

	Character();

	void Move(AppEnv env);

	Vec2f pos;
	Vec2f size;
private:

	float speed;


};