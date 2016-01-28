#include <map>

void  Function(std::map<int, const char*>::iterator mapBigin, std::map<int, const char*>::iterator mapEnd)
{
	for (; mapBigin != mapEnd; ++mapBigin)
	{
		printf("%d,", (*mapBigin).first);
		printf("%s\n", (*mapBigin).second);
	}
	printf("\n");
}

int main()
{
	std::map<int, const char*> test;
	std::map<int, const char*>::iterator it, mapBigin, mapEnd;

	test.insert(std::make_pair(1, "�h���S���N�G�X�g"));
	test.insert(std::make_pair(2, "�t�@�C�i���t�@���^�W�["));
	test.insert(std::make_pair(3, "���}���V���O�T�K"));

	Function(test.begin(), test.end());

	mapBigin = test.begin();
	mapEnd = test.end();

	it = test.find(1);

	printf("�Y���̃L�[�̃Q�[����%s�ł��B\n", (*it).second);
	return 0;
}