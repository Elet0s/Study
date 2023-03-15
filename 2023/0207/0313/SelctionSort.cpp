#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len)
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
                Num1 = array[j];
                array[j] = array[j + 1];
                array[j + 1] = Num1;
            }
        }
    }
}


int main()
{
    return 0;
}