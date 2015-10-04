
#include <iostream>
#include <string>
#include <fstream>	//ファイルを扱うクラス
#include <cstdlib>

using namespace std;

int main() {
	
	//fileを作成
	fstream file;

	//open()関数呼び出し。test1.txtファイルを開く。ファイルから読み込むときはios::in
	file.open("test1.txt", ios::in);

	//ファイルが正常に開かれるとここの関数がtrueを返す。逆に開かれなければfalseを返す
	if (!file.is_open())
	{
		return EXIT_FAILURE;
	}

	string str;

	//ファイルから一行だけ読み込み
	getline(file, str);

	file.close();

	cout << str << endl;
}
