#include <stdio.h>
#include <string>
#include <fstream>
#include <assert.h>

int main()
{
	std::fstream file;
	file.open("test.txt", std::ios::out);
	assert(!file.is_open());

	std::string str;

	std::getline(file, str);

	printf("%d\n", str);

}