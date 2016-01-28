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

	test.insert(std::make_pair(1, "ドラゴンクエスト"));
	test.insert(std::make_pair(2, "ファイナルファンタジー"));
	test.insert(std::make_pair(3, "ロマンシングサガ"));

	Function(test.begin(), test.end());

	mapBigin = test.begin();
	mapEnd = test.end();

	it = test.find(1);

	printf("該当のキーのゲームは%sです。\n", (*it).second);
	return 0;
}