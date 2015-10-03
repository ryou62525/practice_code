#include "Test.h"

void hoge::Draw()
{
	color = Color(0, 0.5f, 0);
	drawFillBox(0, 0, 32, 32, color);
}

void huga::Draw()
{
	color = Color(0, 0, 0.5f);
	drawFillBox(-50, 0, 32, 32, color);
}

void piyo::Draw()
{
	color = Color(0.5f, 0, 0);
	drawFillBox(50, 0, 32, 32, color);
}