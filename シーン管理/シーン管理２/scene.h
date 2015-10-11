//---------------------------------------------//
//				処理を一括して行う部分			   //
//---------------------------------------------//

#pragma once
#include "Base.h"
#include "Load.h"
#include "Result.h"
#include "Title.h"

class Batch
{
private:

	int scene_switch;

public:

	Batch();

	void Update();
	void Draw();

};