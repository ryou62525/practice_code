
#pragma once
#include "Objct.h"

class Player : Objct
{
public:

	Player();

	void Update();
	void Draw();
	void Reset(); 

private:

	Direction move_dir;

};