
#include <iostream>
#include <string>
#include <fstream>	//�t�@�C���������N���X
#include <cstdlib>

using namespace std;

int main() {
	
	//file���쐬
	fstream file;

	//open()�֐��Ăяo���Btest1.txt�t�@�C�����J���B�t�@�C������ǂݍ��ނƂ���ios::in
	file.open("test1.txt", ios::in);

	//�t�@�C��������ɊJ�����Ƃ����̊֐���true��Ԃ��B�t�ɊJ����Ȃ����false��Ԃ�
	if (!file.is_open())
	{
		return EXIT_FAILURE;
	}

	string str;

	//�t�@�C�������s�����ǂݍ���
	getline(file, str);

	file.close();

	cout << str << endl;
}
