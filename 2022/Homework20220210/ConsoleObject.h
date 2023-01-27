#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"
#include <iostream>
#include<conio.h>


class ConsoleObject
{
public:

	ConsoleObject(
		TextScreen* _Screen,
		const char* _Text,
		const ConsoleVector& _Pos,
		const ConsoleVector& _Size);

	~ConsoleObject();


	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

	ConsoleVector GetPos()
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void SetMove(ConsoleVector _Value)
	{
		Pos_ += _Value;
		if (Pos_.x_ >= Size_.x_ || Pos_.x_ < 0)
		{
			Pos_ -= _Value;

			printf_s("거긴 못지나간다 돌아가라\n");
			_getch();
			printf_s(Text_);
			printf_s(":이런...");
			_getch();
		}
		else if (Pos_.y_ >= Size_.y_ || Pos_.y_ < 0)
		{
			Pos_ -= _Value;

			printf_s("거긴 못지나간다 돌아가라\n");
			_getch();
			printf_s(Text_);
			printf_s(":이런...");
			_getch();
		}
	}

	void Render();

protected:

private:

	TextScreen* Screen_;
	ConsoleVector Size_;
	ConsoleVector Pos_;

	char Text_[3];
};

