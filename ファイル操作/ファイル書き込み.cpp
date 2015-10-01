//+++++++++++++++++++++++++++++++++++//
//		   ファイルの書き込み			 //
//+++++++++++++++++++++++++++++++++++//
#include "lib/framework.hpp"
#include "Window.h"
#include <iostream>	
#include <fstream>	//ファイルを扱うためのクラス
#include <cstdlib>  

using namespace std;

int main() {
 
  AppEnv env(Window::WIDTH, Window::HEIGHT);

  //最初にオブジェクトであるfileを作成
  fstream file;

  while (env.isOpen()) {

    env.begin();

	//ファイルを開く関数。　ファイル名と条件、状態をを関数にわたす（ここではios::out, ファイルへ書き出すという命令）
	file.open("test.txt", ios::out);
	
	//ファイルが開かれたら"is_open()"関数がtrueを返す。エラーが出たら逆にfalseが返される。
	if (!file.is_open())
	{
		return EXIT_FAILURE;
	}

	file << "テストだよ" << endl;

	//ファイルを閉じる関数。かならずファイルを開いたら閉めるようにする。
	file.close();

    env.end();
  }
}
