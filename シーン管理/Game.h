
#pragma once
#include "Common.h"

class Game
{
private:

	SceneType scene_type;

	Font font;
	Fade _fade;

public:
    
	Game();
    void Update();
    void Draw();
	void Reset();			//処理完了後の初期化用関数の定義

	bool  end_decision;
};
