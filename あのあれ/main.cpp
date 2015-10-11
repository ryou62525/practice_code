
#include "lib/framework.hpp"

enum {
	Shot_Max = 5,
	Shot_Speed = 10
};

enum Direction{
	Right = 1,
	Left = -1
};
 
struct Player{
	Vec2f pos;
	Vec2f size;
	Direction dir;
};

struct Shot{
	Vec2f pos;
	Vec2f size;
	Direction dir;
	bool active;
};

int main() {
  AppEnv env(1640, 1480);

  Texture ziki("res/ziki.png");

  Player player;
  player.pos = Vec2f(0, 0);
  player.size = Vec2f(ziki.width(), ziki.height());
  player.dir = Right;

  Shot shots[Shot_Max];
  for (int i = 0; i < Shot_Max; ++i){
	  shots[i].active = false;
	  shots[i].size = Vec2f(5, 5);
  }

  while (env.isOpen()) {
    env.begin();

	if (env.isPressKey(GLFW_KEY_RIGHT)){
		player.dir = Right;
	}
	if (env.isPressKey(GLFW_KEY_LEFT)){
		player.dir = Left;
	}

	if (env.isPushKey('A')){
		for (int i = 0; i < Shot_Max; ++i){
			if (!shots[i].active){
				shots[i].dir = player.dir;
				shots[i].pos = player.pos;
				shots[i].active = true;
				break;
			}
		}
	}
	//弾の移動
	for (int i = 0; i < Shot_Max; ++i){
		if (shots[i].active){
			shots[i].pos.x() += (Shot_Speed * shots[i].dir);
		}
	}

	drawTextureBox(player.pos.x() + (player.dir * -(player.size.x() * 0.5f)), player.pos.y(),
		player.size.x(), player.size.y(), 0, 0,
		player.size.x(), player.size.y(), ziki, Color::white, 0,
		Vec2f(player.dir, 1),
		Vec2f::Zero());

	for (int i = 0; i < Shot_Max; ++i){
		if (shots[i].active){
			drawFillCircle(shots[i].pos.x(), shots[i].pos.y(),
 				shots[i].size.x(), shots[i].size.y(), 2, Color::red);
		}
	}

    env.end();
  }
}