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
	//���� �����ڴ� �ش� ���忡�� ���� ���� ���� ����;
	//��ü�� ��ȯ 0->1->20

	std::cout << front << std::endl;

	int back = 0;
	back = front++;
	//���������ڴ� �ش� ���忡�� ���� �ʰ� ���� ����
	//���� ��ȯ -> �ٸ� �޸𸮰� �߰������� �ʿ��ϴ�. 0->20, 20->21

	std::cout << front << " " << back << std::endl;


//	------------------------------------------ ���� ������ ����



	std::vector<int> A = {2,5,3,4,19,19, 50,60,3,6};
	InsertionSort(A, 10);

    for (size_t x = 0; x < 10; ++x)
    {
        std::cout << A[x] << std::endl;
    }
}