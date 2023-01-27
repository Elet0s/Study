#include "ConsoleScreen.h"
#include <iostream>
#include <assert.h>

// Value�� �̱���
//ConsoleScreen ConsoleScreen::MainScreen;
//ConsoleScreen& ConsoleScreen::GetInst() {
//	return MainScreen;
//}

//ConsoleScreen* ConsoleScreen::MainScreen = nullptr;
//ConsoleScreen& ConsoleScreen::GetInst() 
//{
//	if (nullptr == MainScreen)
//	{
//		MainScreen = new ConsoleScreen();
//	}
//	return *MainScreen;
//};
//
//void ConsoleScreen::Destroy()
//{
//	if (nullptr == MainScreen)
//	{
//		delete MainScreen;
//		MainScreen = nullptr;
//	}
//}

ConsoleScreen* ConsoleScreen::MainScreen = new ConsoleScreen();

ConsoleScreen& ConsoleScreen::GetInst()
{
	return *MainScreen;
}

void ConsoleScreen::Destroy()
{
	if (nullptr != MainScreen)
	{
		delete MainScreen;
		MainScreen = nullptr;
	}
}


ConsoleScreen::ConsoleScreen()
	: PixelData_(nullptr)
	, Size_(0, 0)
	, DefaultPixel_() // ��� �����ʿ䰡 ����.
{

}

ConsoleScreen::ConsoleScreen(int _Width, int _Height, const char* _DefaultValue)
	: PixelData_(nullptr)
	, Size_(0, 0)
	, DefaultPixel_() // ��� �����ʿ䰡 ����.
{
	CreateScreen(_Width, _Height, _DefaultValue);
}

ConsoleScreen::~ConsoleScreen()
{
	for (int i = 0; i < Size_.y_; i++)
	{
		if (nullptr != PixelData_[i])
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

void ConsoleScreen::CreateScreen(int _Width, int _Height, const char* _DefaultValue)
{
	Size_.x_ = _Width;
	Size_.y_ = _Height;

	for (int i = 0; i < 3; i++)
	{
		DefaultPixel_[i] = _DefaultValue[i];
	}

	int RealWidth = Size_.x_ * 2;
	RealWidth += 2;

	PixelData_ = new char* [Size_.y_];

	for (int i = 0; i < Size_.y_; i++)
	{
		PixelData_[i] = new char[RealWidth];
	}
}

void ConsoleScreen::RenderStart()
{
	int RealWidth = Size_.x_ * 2;
	RealWidth += 1;

	for (int y = 0; y < Size_.y_; y++)
	{
		for (int x = 0; x < Size_.x_; x++)
		{
			for (int i = 0; i < 2; i++)
			{
				PixelData_[y][(x * 2) + i] = DefaultPixel_[i];
			}
		}
		PixelData_[y][(Size_.x_ * 2)] = '\n';
		PixelData_[y][(Size_.x_ * 2) + 1] = 0;
	}

}

void ConsoleScreen::RenderEnd()
{
	system("cls");

	for (int y = 0; y < Size_.y_; y++)
	{
		// char*
		printf_s(PixelData_[y]);
	}
}


// ��κ��� ��Ȳ���� �̰ɷ� ��������
void ConsoleScreen::SetPixel(ConsoleVector _Pos, const char* _DefaultValue)
{
	SetPixel(_Pos.x_, _Pos.y_, _DefaultValue);
}

// �����Լ��� ������ ������ ������ ������ ���Ҷ��� �ֱ� ������
// 2���� �Լ��� ���� �����ϰ� �˴ϴ�.
// �ڵ�� ��뼺�� ���ƾ� �մϴ�.
void ConsoleScreen::SetPixel(int _X, int _Y, const char* _DefaultValue)
{
	if (0 > _X)
	{
		assert(false);
	}

	if (0 > _Y)
	{
		assert(false);
	}

	if (Size_.x_ <= _X)
	{
		assert(false);
	}

	if (Size_.y_ <= _Y)
	{
		assert(false);
	}

	// �⺻�ڷ����� ����� �Լ��� ��¥ ������ ����

	for (int i = 0; i < 2; i++)
	{
		PixelData_[_Y][(_X * 2) + i] = _DefaultValue[i];
	}
}