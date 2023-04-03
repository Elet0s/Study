#pragma once
#include"ConsoleMath.h"
#include "TextScreen.h"
class Player
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	Player(TextScreen* _Screen, const char* _Text);//������
	~Player();//�Ҹ���

	// delete Function
	Player(const Player& _Other) = delete;//���� ������
	Player(Player&& _Other) noexcept = delete;//���۷��� ������
	Player& operator=(const Player& _Other) = delete;//���Կ�����(����)
	Player& operator=(Player&& _Other) noexcept = delete;//Rvalue ���۷��� ������
	
	void Render();
	void Update();

	ConsoleVector GetPos()
	{
		return Pos_;
	}


private://�ش� Ŭ���������� ���� ����
	ConsoleVector Pos_;
	TextScreen* Screen_;
	char Text_[3];

};