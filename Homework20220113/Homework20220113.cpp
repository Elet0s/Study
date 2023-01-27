#include<iostream>
void print(const char* a, char* b)
{
	int j = 0;

	for (int i = 0; 0 != a[i]; i += 1)
	{
		char ai = a[i];

		if (' ' != ai)
		{
			b[j] = a[i];
			j += 1;
		}
	}
	return;
}

int main()
{
	char text[1000] = { 0 };
	print("ab c123 asdasd", text);
	printf_s(text);
}