#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int BubleSort(int array[], size_t array_len)//array_len는 배열 길이
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
			for (size_t j = 0; j < array_len; ++j)
			{

			}
		}
	}
}


int main()
{
   int A[5] = { 0 ,5, 3,4,1 };

   int B[1] = { 0 };

   BubleSort(A, 5);
   BubleSort(B, 1);
    return 0;
}