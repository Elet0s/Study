#pragma once
#include<iostream>
#include<crtdbg.h>
#include<assert.h>

using DataType = int;

class Sizecopy
{

public:
	int GetSize();
	DataType& operator[](int _Index);
	void operator=(const Sizecopy& _Other);
	void AllValueSetting(const DataType& Data);
	void Release();
	void ReSize(unsigned int _Size);


public:
	Sizecopy(unsigned int _Size);
	~Sizecopy();


private:
	int Size_;
	DataType* ArrData_;
};