#pragma once
#include "Collision.h"

class Scene
{
public:

	Scene();
	void Setup();
	void Update(AppEnv& env);
	void Draw();
	void Reset();
	void Move(AppEnv& env, Vec2f& pos, float speed);

private:

	enum SceneCollision
	{
		RECT_TO_RECT,
		CIRCLE_TO_CIRCLE
	};

	SceneCollision scene_type;

	Vec2f pos1;
	Vec2f size1;

	Vec2f pos2;
	Vec2f size2;

	float speed;

	int division;

	Color color;

};