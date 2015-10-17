
#include "Scene.h"

Scene::Scene()
{
	scene_type = RECT_TO_RECT;
	pos1=Vec2f(100, 100);
	size1 = Vec2f(50, 50);

	pos2 = Vec2f(0, 0);
	size2 = Vec2f(50, 50);

	speed = 3.0f;

	division = 50;

	color = Color::white;
}

void Scene::Setup()
{
	pos1 = Vec2f(100, 100);
	size1 = Vec2f(50, 50);

	pos2 = Vec2f(0, 0);
	size2 = Vec2f(50, 50);

	speed = 3.0f;

	division = 50;

	color = Color::white;
}

void Scene::Update(AppEnv& env)
{
	switch (scene_type)
	{
	case RECT_TO_RECT:

		Move(env, pos1, speed);
		color = Color::white;

		if (Collision::RectToRect(pos1, size1, pos2, size2))
		{
			color = Color::red;
		}

		if (env.isPushKey('A'))
		{
			scene_type = CIRCLE_TO_CIRCLE;
			Setup();
		}

		

		break;
	case CIRCLE_TO_CIRCLE:

		

		Move(env, pos1, speed);
		color = Color::white;

		if (Collision::CircleToCircle(pos1, size1, pos2, size2))
		{
			color = Color::red;
		}

		if (env.isPushKey('A'))
		{
			scene_type = RECT_TO_RECT; 
			Setup();
		}

		break;
	}
}

void Scene::Draw()
{
	switch (scene_type)
	{
	case RECT_TO_RECT:

		drawFillBox(pos1.x(), pos1.y(), size1.x(), size1.y(), Color::green);

		drawFillBox(pos2.x(), pos2.y(), size2.x(), size2.y(), color);

		break;
	case CIRCLE_TO_CIRCLE:

		drawFillCircle(pos1.x(), pos1.y(), size1.x(), size1.y(), division, Color::green);

		drawFillCircle(pos2.x(), pos2.y(), size2.x(), size2.y(), division, color);

		break;
	}
}

void Scene::Reset()
{

}

void Scene::Move(AppEnv& env, Vec2f& pos, float speed)
{
	if (env.isPressKey(GLFW_KEY_RIGHT)){ pos.x() += speed; }
	if (env.isPressKey(GLFW_KEY_LEFT)){ pos.x() -= speed; }
	if (env.isPressKey(GLFW_KEY_UP)){ pos.y() += speed; }
	if (env.isPressKey(GLFW_KEY_DOWN)){ pos.y() -= speed; }
}