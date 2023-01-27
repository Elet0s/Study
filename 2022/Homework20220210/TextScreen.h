#pragma once
#include "ConsoleMath.h"
#include <assert.h>

// ���� :
class TextScreen
{
public:

	// constrcuter destructer
	TextScreen(int _Width, int _Height, const char* _DefaultValue);
	~TextScreen();

	// delete Function
	TextScreen(const TextScreen& _Other) = delete;
	TextScreen(TextScreen&& _Other) noexcept = delete;
	TextScreen& operator=(const TextScreen& _Other) = delete;
	TextScreen& operator=(TextScreen&& _Other) noexcept = delete;


	ConsoleVector GetSize()
	{
		return Size_;
	}

	// ȭ���� ���ڸ� �������� �Ҵ��Ͽ� �޸𸮸� ������ �۾�
	void CreateScreen(int _Width, int _Height, const char* _DefaultValue);

	// DefaultPixel_�� ���ڿ� ���� 2����Ʈ�� ȭ���� ���� �ʱ�ȭ �Ѵ�.
	void SettingScreen();

	// PixelData_�� ������ ��� ȭ�鿡 ����Ѵ�.
	void PrintScreen();

	// X Y��ġ�� ���ڸ� ����Ѵ�.
	void SetPixel(ConsoleVector _Pos, const char* _DefaultValue);
	void SetPixel(int _X, int _Y, const char* _DefaultValue);



protected:

private:
	ConsoleVector Size_;
	char** PixelData_;
	char DefaultPixel_[3];

};

