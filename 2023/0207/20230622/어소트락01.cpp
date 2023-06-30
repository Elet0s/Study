

/////////////////////////////
//아래 main함수 주석지우고 실행 부탁 드립니다!
////////////////////////////


#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

bool Cheak[100] = { false,};
bool CheakO_;
int Max_ = 0 ;
void DFS(int _idx)
{
	if (_idx == Max_)//입력 최댓값이면
	{
		for (size_t i = 0; i < Max_; i++)
		{
			if (Cheak[i] == true)
			{
				printf("o");
			}
			else 
			{
				printf("x");
			}
		}
		printf("\n");
		return;
	}
		Cheak[_idx] = true;
		DFS(_idx + 1);
		Cheak[_idx] = false;
		DFS(_idx + 1);
}
/////////////////////////////
//주석지우고 실행 부탁 드립니다!
////////////////////////////

//void main()
//{
//	printf("1~99까지의 숫자 중 입력주세요\n");
//	scanf_s("%d", &Max_);
//	printf("%d 받았습니다\n", Max_);
//	DFS(0);
//	int a = 0;
//}
