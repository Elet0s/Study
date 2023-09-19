#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
vector<string> BanId, UserId;//���ڿ� �� �غ�
unordered_set<string> DuplicationCheak; //Set���� �ߺ��ȵǰ� ����
bool CheakPack[8] = { false, }; // ��������Ʈ <->�긮��Ʈ �� üũ��


void DFS(int _idx)//����������ŭ ������ �ؾ��ϴ� ����ó�� ����� ���� 
{
    if (_idx == BanId.size()) //����� �� ������ ������
    {
        string str = "";//�ʱ�ȭ
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
    for (size_t i = 0; i < UserId.size(); i++)//������ �ϳ��� ��ü������ ���������
    {
        if (CheakPack[i] == true) //�ڸ��� ���� �� ����
        {
            continue;
        }
        string UsingUserId = UserId[i]; //�񱳸� ���� ������
        string UsingBanId = BanId[_idx]; //�񱳸� ���� ������

        if (UsingUserId.size() != UsingBanId.size()) // ������ �ȸ����� ���
        {
            continue;
        }
        bool CharCheak = true;
        for (size_t j = 0; j < UsingUserId.size(); j++)//���ڿ� �ϳ��ϳ� ��
        {

            if (UsingBanId[j] == '*')// �� �޷����� ���
            {
                continue;
            }
            if (UsingUserId[j] != UsingBanId[j])// �ܾ ���� ������
            {
                CharCheak = false;
                break;

            }
        }
        if (CharCheak == true)
        {
            CheakPack[i] = true; // �ϳ� ����
            DFS(_idx + 1);//���
            CheakPack[i] = false;//������ ���ƿ��� false
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
