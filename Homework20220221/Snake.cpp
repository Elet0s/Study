#include<iostream>
#include"Engine/ConsoleRandom.h"
#include<conio.h>
#include"Head.h"
#include"Body.h"
#include<vector>
#include"Engine/ConsoleScreen.h"
#include"GlobalGameLogic.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	ConsoleScreen::GetInst().CreateScreen(10, 10, "бр");

	ConsoleObject* NewHead = new Head();
	NewHead->Init({ 5, 5 }, "б┌");

	ConsoleObject* NewBody = GlobalGameLogic::CreateBodyLogic(NewHead);

	while (true)
	{
		if (nullptr == NewBody)
		{
			NewBody = GlobalGameLogic::CreateBodyLogic(NewHead);
		}

		ConsoleScreen::GetInst().RenderStart();

		NewBody->Render();
		NewHead->Render();

		ConsoleScreen::GetInst().RenderEnd();

		NewBody->Update();
		NewHead->Update();

		if (true == NewHead->GetIsDeath())
		{
			break;
		}

		if (NewHead->OverLapCheck(NewBody))
		{
			NewHead->OverLap(NewBody);
			if (nullptr != NewBody)
			{
				delete NewBody;
				NewBody = nullptr;
			}
		}
	}
	ConsoleScreen::Destroy();
	if (nullptr != NewHead)
	{
		delete NewHead;
		NewHead = nullptr;
	}
	if (nullptr != NewBody)
	{
		delete NewBody;
		NewBody = nullptr;
	}
}