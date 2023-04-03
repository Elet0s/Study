#include"Player.h"
#include<conio.h>

Player::Player(TextScreen* _Screen, const char* _Text)
	: Screen_(_Screen)
	, Pos_(_Screen->GetSize().GetHalfVector())
	, Text_()
{
	if (nullptr == _Screen)
	{
		assert(false);
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}
Player::~Player()
{

}
void Player::Render()
{
	Screen_->SetPixel(Pos_, Text_);
}
void Player::Update()
{
	int value = _getch();
	switch (value)
	{
	case'a':
	case'A':
	case'け':
		Pos_.x_ -= 1;
		break;
	case'd':
	case'D':
	case'し':
		Pos_.x_ += 1;
		break;
	case'w':
	case'W':
	case'じ':
		Pos_.y_ -= 1;
		break;
	case's':
	case'S':
	case'い':
		Pos_.y_ += 1;
		break;
	default:
		break;
	}
	Screen_->Cheak(Pos_);
}