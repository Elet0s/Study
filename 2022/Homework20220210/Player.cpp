#include "Player.h"
#include <conio.h>
#include "ConsoleGlobalInst.h"

Player::Player(TextScreen* _Screen, const char* _Text)
	: ConsoleObject(_Screen, _Text, _Screen->GetSize().GetHalfVector(), _Screen->GetSize())
{
}

Player::~Player()
{
}


int Player::Update()
{
	// GlobalValue::AllMonsters

	// AllMonsters[2];

	// Pos_.x_ += 1; // Pos_.y_ += 0;
	//   'a'
	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
		SetMove({ -1, 0 });
		break;
	case 'd':
	case 'D':
		SetMove({ 1, 0 });
		break;
	case 'w':
	case 'W':
		SetMove({ 0, -1 });
		break;
	case 's':
	case 'S':
		SetMove({ 0, 1 });
		break;
	case 'q':
	case 'Q':
		End = 1;
		return End;
		// �������ΰ��� ��������
		// ������ ����ȴ�.
		break;
	default:
		break;
	}
	return 0;

}

