//+++++++++++++++++++++++++++++++++++//
//		   ファイルの書き込み			 //
//+++++++++++++++++++++++++++++++++++//
#include "lib/framework.hpp"
#include "Window.h"
#include <iostream>	
#include <fstream>	//ファイルを扱うためのクラス
#include <cstdlib>  

using namespace std;

class player
{
public:

	
	int HP;
	int ATK;
	int DEF;
	player(){
		HP = 19;
		ATK = 73;
		DEF = 827;
	};
private:

};

struct status
{
	int HP;
	int ATK;
	int DEF;

};

int main() {
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);

  //最初にオブジェクトであるfileを作成
  fstream file;
  player p;
  
  status s;

  while (env.isOpen()) {

    env.begin();

	//ファイルを開く関数。　ファイル名と条件、状態をを関数にわたす（ここではios::out, ファイルへ書き出すという命令）
	//resﾌｧｲﾙに書き込み
	file.open("res/test.txt", ios::out);


	//ファイルが開かれたら"is_open()"関数がtrueを返す。エラーが出たら逆にfalseが返される。
	if (!file.is_open())
	{
		return EXIT_FAILURE;
	}
	int a = 122;
	int b = 112;
	file << a << ' ' << b << endl;

	//ファイルを閉じる関数。かならずファイルを開いたら閉めるようにする。
	file.close();

    env.end();
  }
}
