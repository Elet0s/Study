#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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