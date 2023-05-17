#include <string>
#include <vector>
#include <queue>
using namespace std;

long long solution(int n, vector<int> works)
{
    long long answer = 0;
    int Value = 0;
    std::priority_queue<int> MyQ(works.begin(), works.end()); //�ڵ� ���� ��

    for (int i = 0; i < n; i++) // n�� ���� ��
    {
        if (MyQ.top() > 0) // ���� ū�� ã��
        {
            Value = MyQ.top();
            MyQ.pop();
            MyQ.push(Value - 1);
        }
        else
        {
            return answer;
        }
    }

    for (int j = 0; j < works.size(); j++) //�� ���ϱ�
    {
        answer += (long long)MyQ.top() * (long long)MyQ.top();
        MyQ.pop();
    }
    return answer;
}
void main()
{
    vector<int> AB = { 4,3,3};
    solution(4, AB);
}