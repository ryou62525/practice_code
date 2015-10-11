//---------------------------------------------//
//				ˆ—‚ğˆêŠ‡‚µ‚Äs‚¤•”•ª			   //
//---------------------------------------------//

#pragma once
#include "Common.h"
#include "Load.h"
#include "Result.h"
#include "Title.h"
#include "Game.h"

enum MainScene
{
	TITLE,
	LOAD,
	MAIN,
	RESULT
};

class Scene
{
private:

	MainScene scene_switch;

	Title _title;
	Load _load;
	Game _game;
	Result _result;

public:

	Scene();

	void Update();
	void Draw();

};