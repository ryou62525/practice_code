#pragma once
#include "lib\framework.hpp"

class Collision
{
public:

	static bool RectToRect(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2);

	static bool CircleToCircle(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2);

};