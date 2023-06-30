#include <string>
#include <vector>
#include <queue>
using namespace std;
int value_=6;
vector<int>MyVcetor = {1,0,0,0,0,0};
std::priority_queue<int> MyQ;
int result_ = 0;
int A_ = 0;
void bfs(int CurNum, int n, vector<vector<int>> AllNet, vector<int>& CurNet) // �־��� CurNum�������� ��Ʈ��ũ�� ����� ��� ��ǥ Ž�� 
{
    for (int j = 0; j < n; j++)
    {

        if (AllNet[CurNum][j] == 1 && CurNet[j] == 0)//����Ǿ��ְ� Ž�� �ȉ�����
        {
            printf("%d �� ���", j);
            CurNet[j] = 1;
            bfs(j, n, AllNet, CurNet);
        }
    }
}

void BFS(int n, vector<vector<int>> computers)
{

    for (int i = 0; i < value_; i++) //ù Ž��
    {

        if (computers[n][i] == 1 && MyVcetor[i]==0)
        {
            MyVcetor[i] = 1;
            printf(" % d �� ���\n", i);
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
        printf("����");
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

    printf("0~5���� ������ �Է��ϸ� �Է��� ������ �ʺ�Ž������\n");
    scanf_s("%d", &Num);
    printf("%d �ԷµǾ����ϴ�.\n", Num);

   printf(" % d �� ���\n", Num);
    
    BFS(Num, A);
}