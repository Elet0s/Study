#include<iostream>

//���������ڿ� ���������� ����


void main()
{

	int front = 0;
	++front =20;
	//���� �����ڴ� �ش� ���忡�� ���� ���� ���� ����;
	//��ü�� ��ȯ 0->1->20

	std::cout << front << std::endl;

	int back = 0;
	back = front++;
	//���������ڴ� �ش� ���忡�� ���� �ʰ� ���� ����
	//���� ��ȯ -> �ٸ� �޸𸮰� �߰������� �ʿ��ϴ�. 0->20, 20->21

	std::cout << front << " " << back << std::endl;



	return;
}
