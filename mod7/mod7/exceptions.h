#pragma once

#include <exception>
using namespace std;

class Bad_lenght :public exception
{
public:
	virtual const char* what()const noexcept override
	{
		return "ERROR: Incorrect array lenght";						//неправильная длинна массива
	}
};

class Bad_range :public exception
{
public:
	virtual const char* what()const noexcept override
	{
		return "ERROR: you have gone beyond the array";				//вышли за пределы массива
	}
};