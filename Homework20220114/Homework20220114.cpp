#include <iostream>
int count(const char* a)
{
	int c = 0;
	for (c = 0; 0 != a[c]; c += 1)
	{

	}
	return c;
}
void ToUpper(const char* a, char* b)
{
	int i = 0;
	int j = count(a);

	for (i = 0; i <= j; i += 1) {

		if (97 <= a[i] && 122 >= a[i])
		{
			b[i] = a[i] - 32;
		}
		b[i] = a[i];
	}
	b[i] = 0;
	return;
}
//97~122소문 65~90 대문 32차이

void charchange(char* text, char pre, char next) //aa가 ff로 출력되게
{
	int i = 0;
	for (i = 0; 0 != text[i]; i += 1)
	{
		if (text[i] == pre)
		{
			text[i] = next;
		}

	}
	return;
}

void revers(const char* source, char* output)
{
	int i = 0;
	int c = count(source) - 1;

	for (i = 0; i <= c; i += 1)
	{

		char s = source[c - i];
		output[i] = s;
	}

	return;
}
void Cut(const char* source, int front, int back, char* output)
{
	int i = 0;
	int c = count(source) - 1;

	if (back >= c)
	{
		return;
	}
	int j = 0;
	for (i = front; i <= back; i += 1)
	{
		output[j] = source[i];
		j += 1;
	}
}

int square1(int a, int b)
{
	int i = 0;
	int square = 1;
	for (i = 0; i < b; i += 1)
	{
		square *= a;
	}
	return square;
}
int Toint(const char* source)
{
	int i;
	int c = count(source) - 1;
	int input = 0;
	int output = 0;

	for (i = 0; i <= c; i += 1)
	{
		input = source[i] - '0';
		input *= square1(10, (c - i));
		output += input;
	}
	return output;
}
int main()
{
	{
		char Text[100];
		ToUpper("pPdcwsec", Text);
		printf_s(Text);
	}
	{
		char Text[100] = "aa, bb, cc, dd";
		charchange(Text, 'a', 'f');
		printf_s(Text);
	}
	{
		char Text[100] = { 0 };
		revers("0123456789", Text);
	}
	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
	}
	{

		int Value = Toint("18135");
		int a = 0;
	}
	return 0;
}