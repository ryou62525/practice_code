
#include "Collision.h"

bool Collision::RectToRect(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	if (pos1.x() + size1.x() > pos2.x() && pos1.x() < pos2.x() + size2.x())
	{
		if (pos1.y() + size1.y() > pos2.y() && pos1.y() < pos2.y() + size2.y())return true;
	}
	return false;
}

bool Collision::CircleToCircle(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2)
{
	if ((pos1.x() - pos2.x())*(pos1.x() - pos2.x()) + (pos1.y() - pos2.y())*(pos1.y() - pos2.y()) 
			<= (size1.x() + size2.x())*(size1.x() + size2.x()))return true;
	return false;
}