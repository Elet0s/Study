#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* message) {
    int answer = 0;

    for (int i = 0; i < 50; i++)
    {
        if (message[i] != NULL)
        {
            answer += 2;
        }
        else
        {
            return answer;
        }
    }
}

void main()
{
    int a = 0;
 const char* abc = "hellow world!";
    a = solution(abc);
    printf("\n % d\n", a);

}