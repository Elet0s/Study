#include <string>
#include <vector>

using namespace std;

void bfs(int CurNum, int n, vector<vector<int>> AllNet, vector<int>& CurNet) // 주어진 CurNum기준으로 네트워크에 연결된 모든 좌표 탐색 
{
    for (int j = 0; j < n; j++)
    {

        if (AllNet[CurNum][j] == 1 && CurNet[j] == 0)//연결되어있고 탐색 안됬으면
        {
            CurNet[j] = 1;
            bfs(j, n, AllNet, CurNet);
        }
    }
}

int solution(int n, vector<vector<int>> computers) 
{
    int answer = 0;
    vector<int> MyVcetor(n, 0);//탐색 유무
    for (int i = 0; i < n; i++)
    {
        if (MyVcetor[i] == 0)// 탐색 안됨
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