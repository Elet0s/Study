#include<iostream>
int Value = 0;
void Func()
{
	
	if (Value < 30)
	{
		std::cout << Value << std::endl;
		++Value;
	}
	else
	{
		return;
	}
	Func();
}

int main()
{
	Func();
}