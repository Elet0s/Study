#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len�� �迭 array�� �����Դϴ�.
//Ȧ�� �迭 �߰��� ã��

int BubleSort(int array[], size_t array_len)
{
    int answer = 0;
    int Num1 = 0;

    if (array_len == 1)
    {
        answer = array[0];
        return answer;
    }
    for (int i = 0; i < array_len; i++)
    {
        for (int j = 0; j < array_len - 1; j++)
        {
            if (j == array_len - 2 && i == array_len - 1)
            {

                answer = array[array_len / 2];
                return answer;

            }
            else if (array[j] >= array[j + 1])
            {
                Num1 = array[j];                            // std::swap  = �� ��������� ���� ��ȯ�ϴ� �Լ�
                array[j] = array[j + 1];
                array[j + 1] = Num1;
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