#include<iostream>
#include<assert.h>
#include"SoltVector.h"

int main()
{
	SoltVector<int> MyVector;
	MyVector.push_back(9);
	MyVector.push_back(8);
	MyVector.push_back(7);
	MyVector.push_back(8);
	MyVector.push_back(30);
	MyVector.push_back(50);
	MyVector.push_back(53);
	MyVector.push_back(5);
	MyVector.push_back(53);
	MyVector.push_back(2);

	for (size_t i=0 ;i<MyVector.size(); i++)
	{
		std::cout << MyVector[i] << std::endl;
	}

}