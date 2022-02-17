#pragma once
#include<iostream>
#include<crtdbg.h>
#include<assert.h>

using DataType = int;

class SizeCopy
{

public:
	int GetSize();
	int GetIndex(int _Index);
	DataType& operator[](int _Index);
	void operator=(const SizeCopy& _Other);
	void AllValueSetting(const DataType& Data);
	void CheakSize(unsigned int _Size);
	void Release(int _a);
	void ReSizeA(unsigned int _Size);
	void ReSizeB(unsigned int _Size);


public:
	SizeCopy(unsigned int _Size);
	~SizeCopy();


private:
	int a_;
	int SizeA_;
	int SizeB_;
	int Cheak_;
	DataType* ArrData1_;
	DataType* ArrData2_;
};