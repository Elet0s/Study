#include<iostream>
#include<vector>

void InsertionSort(std::vector<int>& vec , int len)
{
	for (size_t i = 0; i < len; ++i)
	{

	}
}

void main()
{

	int front = 0;
	++front = 20;
	//전위 연산자는 해당 문장에서 제일 먼저 연산 실행;
	//객체를 반환 0->1->20

	std::cout << front << std::endl;

	int back = 0;
	back = front++;
	//후위연산자는 해당 문장에서 제일 늦게 연산 실행
	//값을 반환 -> 다른 메모리가 추가적으로 필요하다. 0->20, 20->21

	std::cout << front << " " << back << std::endl;


//	------------------------------------------ 위쪽 연산자 공부



	std::vector<int> A = {2,5,3,4,19,19, 50,60,3,6};
	InsertionSort(A, 10);

    for (size_t x = 0; x < 10; ++x)
    {
        std::cout << A[x] << std::endl;
    }
}