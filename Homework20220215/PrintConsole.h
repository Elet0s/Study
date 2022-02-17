#pragma once
#include<iostream>
#include"DataCopy.h"
#include"SizeCopy.h"
class PrintConsole
{
public:
	PrintConsole();
	~PrintConsole();
	
	void PrintA(SizeCopy& _Data);
	void PrintA(DataCopy& _Data);

private:
	
};