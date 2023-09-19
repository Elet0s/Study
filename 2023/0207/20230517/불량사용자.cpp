#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
vector<string> BanId, UserId;//문자열 비교 준비
unordered_set<string> DuplicationCheak; //Set으로 중복안되게 수집
bool CheakPack[8] = { false, }; // 유저리스트 <->밴리스트 비교 체크용


void DFS(int _idx)//밴유저수만큼 선택을 해야하니 깊이처럼 사용할 것임 
{
    if (_idx == BanId.size()) //경우의 수 끝까지 왔으면
    {
        string str = "";//초기화
        for (size_t i = 0; i < UserId.size(); i++)
        {
            if (CheakPack[i] == true)
            {
                str += (i + '0');
            }
        }
        DuplicationCheak.insert(str);
        return;
    }
    for (size_t i = 0; i < UserId.size(); i++)//밴유저 하나와 전체유저를 비교해줘야함
    {
        if (CheakPack[i] == true) //자리에 누가 들어가 있음
        {
            continue;
        }
        string UsingUserId = UserId[i]; //비교를 위해 꺼내줌
        string UsingBanId = BanId[_idx]; //비교를 위해 꺼내줌

        if (UsingUserId.size() != UsingBanId.size()) // 사이즈 안맞으면 통과
        {
            continue;
        }
        bool CharCheak = true;
        for (size_t j = 0; j < UsingUserId.size(); j++)//문자열 하나하나 비교
        {

            if (UsingBanId[j] == '*')// 별 달렸으니 통과
            {
                continue;
            }
            if (UsingUserId[j] != UsingBanId[j])// 단어가 같지 않으면
            {
                CharCheak = false;
                break;

            }
        }
        if (CharCheak == true)
        {
            CheakPack[i] = true; // 하나 탔음
            DFS(_idx + 1);//재귀
            CheakPack[i] = false;//끝나고 돌아오면 false
        }
    }

}

int solution(vector<string> user_id, vector<string> banned_id)
{
    BanId = banned_id;
    UserId = user_id;

    DFS(0);

    return DuplicationCheak.size();
}
void main()
{
    vector<string> UserList = { "frodo", "fradi", "crodo", "abc123", "frodoc" };
    vector<string>BanUserList01{ "*rodo", "******" };
    vector<string>BanUserList02{ "*rodo", "*rodo", "******" };
    vector<string>BanUserList03{ "fr*d*", "*rodo", "******","*rodo" };
    solution(UserList, BanUserList01);
}
