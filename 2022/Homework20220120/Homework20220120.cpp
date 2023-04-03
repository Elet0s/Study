#include <iostream>

// 바이트 패딩
// 1. 클래스 내부에서 가장 바이트 크기가 
// 큰 자료형의 크기를 기준으로 잡는다.

// 2. 바이트 크기가 그보다 작은 자료형이 있다면
//    그 자료형의 바이트 크기를 가장 큰 자료형의 크기로 바꾼다.

// 3. 만약 그보다 작은 자료형들이 연속될경우
//    가장 큰 바이트로 묶어서 처리할수 있다면 묶는다.

class Player
{
    // 기준 8 
public:
    char Hp1; 
    __int64 z;
    int Att; // 8 바이트
    __int64 Att1; // 8바이트
    int kl;
    char b[5];
    char Hp; // 8 바이
    char q;
    
};

// ????? 얼마?????
class Test
{
};

int main()
{
    // 00000000 00000000 00000000 00000000

    int Value = int();


    Player NewPlayer = Player();
    Test test = Test();

    (__int64)& NewPlayer;//주소시작
    int g = 0;
    (__int64)& NewPlayer.Hp1;// 시작지점 1byte 할당
    int c = 0;
    (__int64)&NewPlayer.z;//시작지점 기준 8바이트 떨어진 곳
    int as = 0;
    (__int64)&NewPlayer.Att;//시작지점 기준 16바이트 떨어진 곳
    int d = 0;
    (__int64)&NewPlayer.Att1;//시작지점 기준 24바이트 떨어진 곳
    int e = 0;
    (__int64)&NewPlayer.kl;//시작지점 기준 32바이트 떨어진 곳
    int kk=0;
    (__int64)&NewPlayer.b[1];//시작지점 기준 37바이트떨어진 곳 36는 b,b[0]
    int h = 0;
    (__int64)&NewPlayer.b[4];//시작지점 기준 40바이트 떨어진 곳
    int i= 0;
    (__int64)&NewPlayer.Hp;//시작지점 기준 41바이트 떨어진 곳
    int f = 0;
    (__int64) &NewPlayer.q;//시작지점 기준 42바이트 떨어진 곳 
    int sja = 0;

    int PlayerSize = sizeof(NewPlayer);//48바이트 할당
    int qqq = 0;
    int TestSize = sizeof(test);//1바이트 할당
    int tty = 0;
    (__int64)&test;


    int a =0;
}