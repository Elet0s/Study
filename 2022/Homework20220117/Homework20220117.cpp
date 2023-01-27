#include <iostream>

int findcount(const char* find)
{
    int f = 0;
    for (f = 0; 0 != find[f]; f += 1)
    {
    }
    return f - 1;
}
int CountFirst(const char* text, int front, const char* find)
{
    int f = findcount(find);
    int i = 0;
    int j = 0;

    for (i = 0; i < front; i += 1)
    {
        for (j = 0; j <= f; j += 1)
        {
            if (find[j] == text[i + j])
            {
            }
            else
            {
                break;
            }
            if (j == f)
            {
                printf_s("찾음");
            }
        }
    }
    return -1;
}
int backcounter(const char* text)
{
    int b = 0;
    for (b = 0; 0 != text[b]; b += 1)
    {
    }
    return b - 1;
}
int CountLast(const char* text, int back, const char* find)
{
    int b = backcounter(text);
    int f = findcount(find);
    int i = 0;
    int j = 0;
    //b - back ~ b
    for (i = b; i > b - back; i -= 1)
    {
        for (j = f; j >= 0; j -= 1)
        {
            if (find[j] == text[i])
            {
                i -= 1;
            }
            else
            {
                break;
            }
            if (j == 0)
            {
                printf_s("찾음");
            }
        }
    }
    return -1;
}


int main()
{
    {
        int Count = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");
    }
    {
        int Count = CountLast("aaa eee asdfasd eee", 15, "eee");
    }

}