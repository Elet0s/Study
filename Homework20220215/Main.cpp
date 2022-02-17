#include"SizeCopy.h"
#include"DataCopy.h"
#include<iostream>
#include<conio.h>
#include"PrintConsole.h"
#include<crtdbg.h>


int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::cout << "1:SizeCopy Test" << std::endl;
	std::cout << "2:DataCopy Test" << std::endl;
	std::cout << "3:Clear Screen" << std::endl;
	std::cout << "4:Program End\n" << std::endl;
	for (;;)
	{
		int Value = _getch();
		if (Value == '1')
		{
			SizeCopy MySize1 = SizeCopy(10);
			SizeCopy MySize2 = SizeCopy(15);
			SizeCopy MySize3 = SizeCopy(5);

			MySize1.AllValueSetting(1);
			MySize2.AllValueSetting(2);
			MySize3.AllValueSetting(3);

			PrintConsole SizePrint= PrintConsole();
			
			SizePrint.PrintA(MySize1);
			SizePrint.PrintA(MySize2);
			SizePrint.PrintA(MySize3);

			MySize1 = MySize2;
			printf_s("1에 2대입 : ");
			SizePrint.PrintA(MySize1);

			
			MySize1 = MySize3;
			printf_s("1에 3대입 : ");
			SizePrint.PrintA(MySize1);
			

		}
		else if (Value == '2')
		{
			DataCopy MyData1 = DataCopy(10);
			DataCopy MyData2 = DataCopy(15);
			DataCopy MyData3 = DataCopy(5);

			MyData1.AllValueSetting(1);
			MyData2.AllValueSetting(2);
			MyData3.AllValueSetting(3);

			PrintConsole DataPrint = PrintConsole();

			DataPrint.PrintA(MyData1);
			DataPrint.PrintA(MyData2);
			DataPrint.PrintA(MyData3);

			MyData1 = MyData2;
			printf_s("1에 2대입 : ");
			DataPrint.PrintA(MyData1);

			MyData1 = MyData3;
			printf_s("1에 3대입 : ");
			DataPrint.PrintA(MyData1);
		}
		else if (Value == '3')
		{
			system("cls");
			std::cout << "1:SizeCopy Test" << std::endl;
			std::cout << "2:DataCopy Test" << std::endl;
			std::cout << "3:Clear Screen" << std::endl;
			std::cout << "4:Program End\n" << std::endl;
		}
		else if (Value == '4')
		{
			break;
		}
	}
}
