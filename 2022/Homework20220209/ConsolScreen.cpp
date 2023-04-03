#include <iostream>
#include<crtdbg.h>
#include"TextScreen.h"
#include"Player.h"

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	TextScreen NewScreen(20,20,"¤±");
	
	Player NewPlayer(&NewScreen, "¡Ú");

	NewScreen.SettingScreen();

	while (true)
	{
		NewScreen.SettingScreen();
		NewPlayer.Render();
		NewScreen.PrintScreen();
		NewPlayer.Update();
	}

}
