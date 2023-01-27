// ConsoleScreen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <crtdbg.h>
#include "ConsoleGlobalInst.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    MainScreen.SettingScreen();

    // ㅁㅁㅁ
    // ㅁ★ㅁ
    // ㅁㅁㅁ

    while (true)
    {
        MainScreen.SettingScreen();
        MainPlayer.Render();
        // NewMonster.Render();
        MainScreen.PrintScreen();

        if (MainPlayer.Update() == 1)
        {
            break;
        }
        // NewMonster.Update();
    }
}
