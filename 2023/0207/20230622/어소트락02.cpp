#include <string>
#include <vector>
#include <queue>
using namespace std;
int value_=6;
vector<int>MyVcetor = {1,0,0,0,0,0};
std::priority_queue<int> MyQ;
int result_ = 0;
int A_ = 0;
void bfs(int CurNum, int n, vector<vector<int>> AllNet, vector<int>& CurNet) // 주어진 CurNum기준으로 네트워크에 연결된 모든 좌표 탐색 
{
    for (int j = 0; j < n; j++)
    {

        if (AllNet[CurNum][j] == 1 && CurNet[j] == 0)//연결되어있고 탐색 안됬으면
        {
            printf("%d 번 노드", j);
            CurNet[j] = 1;
            bfs(j, n, AllNet, CurNet);
        }
    }
}

void BFS(int n, vector<vector<int>> computers)
{

    for (int i = 0; i < value_; i++) //첫 탐색
    {

        if (computers[n][i] == 1 && MyVcetor[i]==0)
        {
            MyVcetor[i] = 1;
            printf(" % d 번 노드\n", i);
            MyQ.push(i);
        }
    }
    if (MyQ.size() != 0)
    {
        result_ = MyQ.top();
        MyQ.pop();
        BFS(result_, computers);
    }
    A_ = 0;
    for (size_t j = 0; j < value_; j++)
    {
     A_  += MyVcetor[j];
    }
    if (A_ == 6)
    {
        printf("종료");
        return;
    }
}

void main()
{
    int Num =0 ;
    vector<vector<int>> A =
    { {0, 0, 0,0 ,1,0}
        ,{1, 0, 1,0 ,0,1}
        ,{1, 0, 0,1 ,0,0}
        ,{1, 1, 0,0 ,0,0}
        ,{0, 1, 0,1 ,0,1}
        ,{0, 0, 1,1 ,0,0} };

    printf("0~5까지 숫자중 입력하면 입력한 노드부터 너비탐색시작\n");
    scanf_s("%d", &Num);
    printf("%d 입력되었습니다.\n", Num);

   printf(" % d 번 노드\n", Num);
    
    BFS(Num, A);
}