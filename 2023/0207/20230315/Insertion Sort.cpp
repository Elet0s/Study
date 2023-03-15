#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>

void InsertionSort(std::vector<int>& vec, size_t len)
{
    int Num1 = 0;
    int Num2 = 0;

    for (int i = 0; i < len -1; ++i) 
    {
        for (int j = i + 1; j > left && vec[j] < vec[j - 1]; --j) 
        {
            std::swap(vec[j], vec[j - 1]);
        }
    }
}

int main()
{
    int A[5] = { 0 ,5, 3,4,1 };
    int B[1] = { 0 };

    InsertionSort(A, 5);
    InsertionSort(B, 1);
	return 0;
}