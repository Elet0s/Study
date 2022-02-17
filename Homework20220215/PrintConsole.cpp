#include"PrintConsole.h"


 void PrintConsole::PrintA(SizeCopy& _Data)
{
	for (size_t i = 0; i <_Data.GetSize(); i++)
	{
		printf_s("%d", _Data[i]);
	}
	printf_s("\n");
}

PrintConsole::PrintConsole()

{

}
PrintConsole::~PrintConsole()
{

}