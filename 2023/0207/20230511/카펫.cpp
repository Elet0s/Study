#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;

    int a = (brown / 2) + 2; //x+y
    int b = brown + yellow; //x*y

    for (int x = 3; x <= a; x++)//x의 최소값은 3
    {
        for (int y = 3; y <= a; y++)//y의 최소값은 3
        {
            if (x + y == a)
            {
                if (x * y == b)
                {
                    answer.push_back(x);
                    answer.push_back(y);
                    return answer;
                }
            }
        }
    }


}

int main()
{
    int BROWN = 10;
    int YELLOW = 2;
    vector<int> A =  solution(BROWN, YELLOW);

  //  std::cout << A[0] << std::endl;
   // std::cout << A[1] << std::endl;

    return 0;
}