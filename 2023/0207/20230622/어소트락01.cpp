

/////////////////////////////
//�Ʒ� main�Լ� �ּ������ ���� ��Ź �帳�ϴ�!
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
	if (_idx == Max_)//�Է� �ִ��̸�
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
//�ּ������ ���� ��Ź �帳�ϴ�!
////////////////////////////

//void main()
//{
//	printf("1~99������ ���� �� �Է��ּ���\n");
//	scanf_s("%d", &Max_);
//	printf("%d �޾ҽ��ϴ�\n", Max_);
//	DFS(0);
//	int a = 0;
//}
