#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>
#include<iostream>

void SelectionSort(std::vector<int>& vec, size_t len)
{
    if (len > 1)
    {
        for (int i = 0; i < len; ++i)
        {
            for (int j = i + 1; j < len; ++j)
            {
                if (vec[i] > vec[j])
                {
                    std::swap(vec[i], vec[j]);
                }
            }
        }
    }



}

void main()
{
    std::vector<int> A = {44,1,20,3,3,5,8,99,24,10};
    SelectionSort(A, 10);

    for (size_t x = 0; x < 10; ++x)
    {
        std::cout << A[x] << std::endl;
    }
}