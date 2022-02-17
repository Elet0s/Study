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
			printf_s("미구현\n");
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
