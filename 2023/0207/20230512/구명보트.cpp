#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(vector<int> people, int limit)
{
    int answer = 0;
    int size = people.size();
    int front = 0;
    int back = size-1; //vector인덱스로 쓸거라 1빼줌

    sort(people.begin(), people.end());
    
  while (front<=back) 
  {
      if (people[front]+people[back]>limit)// 두수의 합이 제한보다 크다면 
      {
          --back; 
          ++answer;//큰거 하나만 보내줌
      }
      else // 같거나 작다면
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
