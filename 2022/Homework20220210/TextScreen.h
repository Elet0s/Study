#pragma once
#include "ConsoleMath.h"
#include <assert.h>

// 설명 :
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

	// 화면의 글자를 동적으로 할당하여 메모리를 만들어내는 작업
	void CreateScreen(int _Width, int _Height, const char* _DefaultValue);

	// DefaultPixel_의 문자열 앞쪽 2바이트로 화면을 전부 초기화 한다.
	void SettingScreen();

	// PixelData_의 내용을 모두 화면에 출력한다.
	void PrintScreen();

	// X Y위치에 글자를 출력한다.
	void SetPixel(ConsoleVector _Pos, const char* _DefaultValue);
	void SetPixel(int _X, int _Y, const char* _DefaultValue);



protected:

private:
	ConsoleVector Size_;
	char** PixelData_;
	char DefaultPixel_[3];

};

