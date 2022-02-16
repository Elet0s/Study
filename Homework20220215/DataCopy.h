#pragma once
#include<iostream>
#include<crtdbg.h>
#include<assert.h>

using DataType = int;

class DataCopy
{

public:
	int GetSize();
	DataType& operator[](int _Index);
	void operator=(const DataCopy& _Other);
	void AllValueSetting(const DataType& Data);
	void CheakSize(unsigned int _Size);
	void Release(unsigned int _Size);
	void ReSize(unsigned int _Size);


public:
	DataCopy(unsigned int _Size);
	~DataCopy();


private:
	int Size_;
	int Cheak_;
	DataType* ArrData1_;
	DataType* ArrData2_;
};