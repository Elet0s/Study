#include "ConsoleObject.h"

ConsoleObject::ConsoleObject()
	: IsDeath_(false)
{

}

ConsoleObject::ConsoleObject(
	const char* _Text,
	const ConsoleVector& _Pos
)
	: Pos_(_Pos)
{
	//if (nullptr == _Screen)
	//{
	//	assert(false);
	//}

	SetRenderChar(_Text);
}


void ConsoleObject::Update()
{

}

void ConsoleObject::Render()
{
	ConsoleScreen::GetInst().SetPixel(Pos_, Text_);
}


void ConsoleObject::InScreenMovement(const ConsoleVector& _Vector)
{
	int PlayerMoveX = (GetPos() + _Vector).x_;
	int PlayerMoveY = (GetPos() + _Vector).y_;

	int ScreenX = ConsoleScreen::GetInst().GetSize().x_;
	int ScreenY = ConsoleScreen::GetInst().GetSize().y_;

	if (0 > PlayerMoveX)
	{
		return;
	}

	if (0 > PlayerMoveY)
	{
		return;
	}

	if (PlayerMoveX >= ScreenX)
	{
		return;
	}

	if (PlayerMoveY >= ScreenY)
	{
		return;
	}

	SetMove(_Vector);
}


void ConsoleObject::SetRenderChar(const char* _Text)
{

	if (nullptr == _Text)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}

void ConsoleObject::OverLap(ConsoleObject* _Other) {

}

bool ConsoleObject::OverLapCheck(const ConsoleObject* _Other)
{
	if (GetPos() == _Other->GetPos())
	{
		return true;
	}

	return false;
}