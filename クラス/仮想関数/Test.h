#pragma once
#include "Color.h"

//��{�N���X�̌p���Ɖ��z�֐���`
class num : public BoxColor
{
public:
	Color color;
	virtual void Draw() = 0;
};

//��{�N���X���p�������h���N���Xnum
class hoge : public num
{
public:
	
	void Draw();
};

//��{�N���X���p�������h���N���Xhuga
class huga : public num
{
public:

	void Draw();
};

//��{�N���X���p�������h���N���Xpiyo
class piyo : public num
{
public:
	
	void Draw();
};