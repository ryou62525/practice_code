
#include "Player.h"


float PlayerMover(AppEnv& env, Player& player)
{
	if (env.isPressKey('S')){ return player.pos.x()++; }
	if (env.isPressKey('A')){ return player.pos.x()--; }
}

void PlayerDraw(Player& player)
{
	drawFillBox(player.pos.x(), player.pos.y(), player.size.x(), player.size.y(), Color::red);
}