#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

/*
�ڿ��� x�� y�� ��ȯ ����� �� �ִ� ������ ������ ����.
x�� n�� ����  x+=2;
x�� 2�� ���� x*=2;
x�� 3�� ���� x*=3;
x�� y�� ��ȯ�ϱ� ���� �ּ� ���� Ƚ���� ���Ͻÿ�
���� ���� �� ���ٸ� -1 return���� ��

���ѻ��� 
1<= x<=y<= 1000000
1<=n<y
*/

int solution(int x, int y, int n)
{
	int answer = 0;
	int dif = (y - x);

	if (dif <= 0) //���� �� �� ���� ��Ȳ ����ó��
	{
		answer = -1;
		return answer;
	}
	// ���� ����� ������� �������� ������
	// ����� �� �������� Ǯ� ����
	// y���� �־����� ���� �̿��ؼ� Ǫ�°� �� �´� �� ����
	int op1 = (x * 2);//20
	int op2 = (x * 3);//30
	int op3 = (x + n);//15






	//dif �� ¦���̳� Ȧ���̳� �� ���� 

	return answer;
}

void main()
{

}