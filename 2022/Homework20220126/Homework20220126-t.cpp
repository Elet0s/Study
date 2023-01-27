//참고 https://docs.microsoft.com/ko-kr/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170
#include<iostream>
using namespace std;
class My
{
private:
	int A;
public:
	const My operator++()
	{
		A += 1;
		return A;
	}
	const My operator++(int)//단항 연산자 후위를 지정할 때는 (int)로 표시하기로 약속
	{
		int B(A);
		A += 1;
		return B;
	}
	My(int a)
	{
		A = a;
	}


};
int main(void)
{
	My com = My(0);
	My R = My(0);

	R = com++;
	printf_s("%d", R);
	printf_s("%d", com);

	R = 0;
	com = 0;

	R = ++com;
	printf_s("\n%d", R);
	printf_s("%d", com);



	int a = 0;
	printf_s("\n%d", a++);
	printf_s("%d", a);
	a = 0;
	printf_s("\n%d", ++a);
	printf_s("%d", a);
}