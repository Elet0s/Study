#include "GlobalGameLogic.h"
#include <vector>
#include <time.h>
#include "Engine/ConsoleRandom.h"

GlobalGameLogic::GlobalGameLogic()
{
}

GlobalGameLogic::~GlobalGameLogic()
{
}



ConsoleObject* GlobalGameLogic::CreateBodyLogic(const ConsoleObject* _Player)
{
	ConsoleObject* NewBody = new ConsoleObject();

	std::vector<ConsoleVector> AllPos;
	AllPos.reserve(ConsoleScreen::GetInst().GetSize().x_ * ConsoleScreen::GetInst().GetSize().y_);
	AllPos.clear();
	for (int y = 0; y < ConsoleScreen::GetInst().GetSize().y_; y++)
	{
		for (int x = 0; x < ConsoleScreen::GetInst().GetSize().x_; x++)
		{
			ConsoleVector Pos = { x, y };

			if (Pos == _Player->GetPos())
			{
				continue;
			}

			AllPos.push_back({ x, y });
		}
	}

	ConsoleRandom Random = ConsoleRandom(time(nullptr));
	NewBody->Init(AllPos[Random.Next(0, AllPos.size())], "£À");
	return NewBody;
}