#pragma once
#include"ConsoleMath.h"
#include "TextScreen.h"
class Player
{
public:// 어디서든 참조 가능
	// constrcuter destructer
	Player(TextScreen* _Screen, const char* _Text);//생성자
	~Player();//소멸자

	// delete Function
	Player(const Player& _Other) = delete;//복사 생성자
	Player(Player&& _Other) noexcept = delete;//레퍼런스 생성자
	Player& operator=(const Player& _Other) = delete;//대입연산자(복사)
	Player& operator=(Player&& _Other) noexcept = delete;//Rvalue 레퍼런스 생성자
	
	void Render();
	void Update();

	ConsoleVector GetPos()
	{
		return Pos_;
	}


private://해당 클래스에서만 참조 가능
	ConsoleVector Pos_;
	TextScreen* Screen_;
	char Text_[3];

};