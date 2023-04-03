#include"TextScreen.h"
#include<iostream>

TextScreen::TextScreen(int _Width, int _Height, const char* _DefaultValue)
	: PixelData_(nullptr)
	, Size_(0, 0)
	, DefaultPixel_() // 사실 해줄필요가 없다.
{
	CreateScreen(_Width, _Height, _DefaultValue);
}
TextScreen::~TextScreen()
{
	for (int i = 0; i < Size_.y_; i++)
	{
		if (nullptr != PixelData_)
		{
			delete[] PixelData_[i];
			PixelData_[i] = nullptr;
		}
	}

	if (nullptr != PixelData_)
	{
		delete[] PixelData_;
		PixelData_ = nullptr;
	}
}

void TextScreen::CreateScreen(int _Width, int _Height, const char* _DefaultValue)
{
	Size_.x_ = _Width;
	Size_.y_ = _Height;

	for (int i = 0; i < 3; i++)
	{
		DefaultPixel_[i] = _DefaultValue[i];
	}
	int RealWidth = Size_.x_ * 2;
	RealWidth += 2;//2차배열로 한줄 마지막에  0을 집어넣게됨
	
	PixelData_ = new char* [Size_.y_];//2차배열 형태의 [][]중 첫번째 괄호의 값은 포인터가 들어있는 배열값이다.
	for (int i = 0; i < Size_.y_; i++)
	{
		PixelData_[i] = new char[RealWidth];//포인터가 들어있는 배열 값에 포인터배열을 매칭해준다.
	}
}
void TextScreen::SettingScreen()
{
	int RealWidth = Size_.x_ * 2;
	RealWidth += 1;

	for(int y=0; y<Size_.y_; y++)
	{
		for (int x=0; x<Size_.x_; x++)
		{
			for (int  i=0; i<2; i++)
			{
				PixelData_[y][(x*2)+i] = DefaultPixel_[i];
			}
		}
		PixelData_[y][RealWidth-1] = '\n';
		PixelData_[y][RealWidth] = 0;
	}

}
void TextScreen::PrintScreen()
{
	system("cls");
	for (int y = 0; y < Size_.y_; y++)
	{
		printf_s(PixelData_[y]);
	}
}

void TextScreen::SetPixel(ConsoleVector _Pos, const char* _DefaultValue)
{
	SetPixel(_Pos.x_, _Pos.y_, _DefaultValue);
}
void TextScreen::SetPixel(int _X, int _Y, const char* _DefaultValue)
{
	for (int i = 0; i < 2; i++)
	{
		PixelData_[_Y][(_X * 2) + i] = _DefaultValue[i];
	}
}

void TextScreen::Cheak(ConsoleVector _Pos)
{
	if (_Pos.x_ >= Size_.x_)
	{
		assert(false);
	}
	else if (_Pos.x_<0)
	{
		assert(false);
	}
	else if (_Pos.y_ >= Size_.y_)
	{
		assert(false);
	}
	else if (_Pos.y_ < 0)
	{
		assert(false);
	}
}