#include <iostream>

class MyInt
{
public:
    int A;

public:
    MyInt(int _A)
        : A(_A)
    {

    }
public:
    const MyInt operator++()
    {
        A += 1;
        return A;
    }
   const MyInt operator++(int)
    {
        int B(A);
        A += 1;
        return A;
    }
};

int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;
    MyInt MyResult = 0;

   MyResult = MyValue++;
   MyResult = 0;
   MyResult = ++MyValue;
}