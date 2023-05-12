#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(vector<int> people, int limit)
{
    int answer = 0;
    int size = people.size();
    int front = 0;
    int back = size-1; //vector�ε����� ���Ŷ� 1����

    sort(people.begin(), people.end());
    
  while (front<=back) 
  {
      if (people[front]+people[back]>limit)// �μ��� ���� ���Ѻ��� ũ�ٸ� 
      {
          --back; 
          ++answer;//ū�� �ϳ��� ������
      }
      else // ���ų� �۴ٸ�
      {
          ++front;
          --back;
          ++answer;
      }
  }
    
   
    return answer;
}
void main()
{
    vector<int> B = { 70 ,40 ,80, 50,100,200 };;

    Solution(B, 200);

}
