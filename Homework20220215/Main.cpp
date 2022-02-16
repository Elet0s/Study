#include"SizeCopy.h"
#include"DataCopy.h"
#include<iostream>
#include<conio.h>


int main(void)
{
	std::cout << "1:DataCopy Test" << std::endl;
	std::cout << "2:SizeCopy Test" << std::endl;
	std::cout << "3:Program End" << std::endl;
	for (;;)
	{
		int Value = _getch();
		if (Value == '1')
		{
			DataCopy MyData1 = DataCopy(10);
			DataCopy MyData2 = DataCopy(15);
			DataCopy MyData3 = DataCopy(5);

			MyData1.AllValueSetting(1);
			MyData2.AllValueSetting(2);
			MyData3.AllValueSetting(3);

			for (size_t i = 0; i < MyData1.GetSize(); i++)
			{
				printf_s("%d", MyData1[i]);
			}
			printf_s("\n");
			for (size_t i = 0; i < MyData2.GetSize(); i++)
			{
				printf_s("%d", MyData2[i]);
			}
			printf_s("\n");
			for (size_t i = 0; i < MyData3.GetSize(); i++)
			{
				printf_s("%d", MyData3[i]);
			}
			printf_s("\n");
			_getch();
			MyData1 = MyData2;
			printf_s("1에 2대입\n");
			for (size_t i = 0; i < MyData1.GetSize(); i++)
			{
				printf_s("%d", MyData1[i]);
			}
			printf_s("\n");
			MyData1 = MyData3;
			printf_s("1에 3대입\n");
			for (size_t i = 0; i < MyData1.GetSize(); i++)
			{
				printf_s("%d", MyData1[i]);
			}
			printf_s("\n");
			printf_s("여기 밑 Size\n");
			for (int i = 0; i < MyData1.GetSize(); i++)
			{
				printf_s("%d", i);
			}
			printf_s("\n");
			for (int i = 0; i < MyData2.GetSize(); i++)
			{
				printf_s("%d", i);
			}
			printf_s("\n");
			for (int i = 0; i < MyData3.GetSize(); i++)
			{
				printf_s("%d", i);
			}
			_getch();

		}
		else if (Value == '2')
		{
			printf_s("미구현");
		}
		else if (Value == '3')
		{
			break;
		}
	}
}
