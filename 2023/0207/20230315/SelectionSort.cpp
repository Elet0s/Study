#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>

void SelectionSort(std::vector<int>& vec, size_t len)
{
    int Key = 0;
    int Num = 0;

    for (int i = 1; i < len -1; ++i) //0���� �̹� ���� �Ǿ��ִٰ� ������
    {
        Key = vec[i]; // ���� ��� 

        for (int j = i - 1; j >=0 && vec[j] > Key; --j) 
        {
            std::swap(vec[j], vec[j - 1]);
        }
    }
}

//int main()
//{
//    std::vector<int>& A = { 0 };
//    SelectionSort(A, 5);
//	return 0;
//}