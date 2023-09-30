#include <string>
#include <vector>

using namespace std;

void bfs(int CurNum, int n, vector<vector<int>> AllNet, vector<int>& CurNet) // �־��� CurNum�������� ��Ʈ��ũ�� ����� ��� ��ǥ Ž�� 
{
    for (int j = 0; j < n; j++)
    {

        if (AllNet[CurNum][j] == 1 && CurNet[j] == 0)//����Ǿ��ְ� Ž�� �ȉ�����
        {
            CurNet[j] = 1;
            bfs(j, n, AllNet, CurNet);
        }
    }
}

int solution(int n, vector<vector<int>> computers) 
{
    int answer = 0;
    vector<int> MyVcetor(n, 0);//Ž�� ����
    for (int i = 0; i < n; i++)
    {
        if (MyVcetor[i] == 0)// Ž�� �ȵ�
        {
            answer++;
            MyVcetor[i] = 1;
            bfs(i, n, computers, MyVcetor);
        }
    }

    return answer;
}

void main()
{
    vector<vector<int>> A = { {1, 1, 0},{1, 1, 0},{0, 0, 1} };

    solution(5, A);
}