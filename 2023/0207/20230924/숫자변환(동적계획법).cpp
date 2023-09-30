#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

/*
자연수 x를 y로 변환 사용할 수 있는 연산은 다음과 같다.
x에 n을 더함  x+=2;
x에 2를 곱함 x*=2;
x에 3을 곱함 x*=3;
x를 y로 변환하기 위한 최소 연산 횟수를 구하시오
만약 구할 수 없다면 -1 return해줄 것

제한사항 
1<= x<=y<= 1000000
1<=n<y
*/

int solution(int x, int y, int n)
{
	int answer = 0;
	int dif = (y - x);

	if (dif <= 0) //연산 할 수 없는 상황 예외처리
	{
		answer = -1;
		return answer;
	}
	// 연산 방식중 어느것이 적합한지 골라야함
	// 경우의 수 느낌으로 풀어도 가능
	// y값이 주어지는 것을 이용해서 푸는게 더 맞는 것 같음
	int op1 = (x * 2);//20
	int op2 = (x * 3);//30
	int op3 = (x + n);//15






	//dif 가 짝수이냐 홀수이냐 에 따라 

	return answer;
}

void main()
{

}