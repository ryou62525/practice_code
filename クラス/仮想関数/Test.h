#pragma once
#include "Color.h"

//基本クラスの継承と仮想関数定義
class num : public BoxColor
{
public:
	Color color;
	virtual void Draw() = 0;
};

//基本クラスを継承した派生クラスnum
class hoge : public num
{
public:
	
	void Draw();
};

//基本クラスを継承した派生クラスhuga
class huga : public num
{
public:

	void Draw();
};

//基本クラスを継承した派生クラスpiyo
class piyo : public num
{
public:
	
	void Draw();
};