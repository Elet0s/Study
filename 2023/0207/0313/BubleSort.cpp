#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<iostream>

void BubleSort(int array[], size_t array_len)//array_len는 배열 길이
{
	switch (array_len)
	{
	case 0:
		break;
	case 1:
		break;
	default:
		for (size_t i = 0; i < array_len; ++i)
		{
			for (size_t j = 0; j < array_len-1; ++j)
			{
				 if (array[j] > array[j + 1])
				{
					std::swap(array[j], array[j + 1]);
				}
			}
		}
	}
}


void main()
{
   int A[5] = { 0 ,5, 3,4,1 };

   int B[10] = { 21,44,54,12,3,5,8,99,1,1 };

   BubleSort(A, 5);

   for (size_t x = 0; x < 5; ++x)
   {
	   std::cout << A[x] << std::endl;
   }

   BubleSort(B, 10);

   for (size_t x = 0; x < 10; ++x)
   {
	   std::cout << B[x] << std::endl;
   }
}