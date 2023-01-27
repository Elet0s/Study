#pragma once
#include "ConsoleMath.h"
#include <assert.h>

// 싱글톤은 프로그래밍을 사용법은 정말정말 짜는사람 마음입니다.
// 누구라도 가릴것이 없이 그렇게 짜면
// 이걸 패턴이라고 합니다.
// 그 중에서 유일하게
// 여태까지 만난 모든 프로프로그래머들이 다 알고 있으면서
// 서로 어떻게 만들었는지 비교해봤던 패턴이 있는데 싱글톤
// 싱글톤 => 어떠한 객체가 1개만 만들어지게 보장하는 패턴입니다.

// 설명 :
class ConsoleScreen
{
	//  static ConsoleScreen MainScreen;


		//  Value형 싱글톤
	//private:
	//	static ConsoleScreen MainScreen;
	//public:
	//	static ConsoleScreen& GetInst();

	//private:
	//	static ConsoleScreen* MainScreen;
	//
	//public:
	//	static ConsoleScreen& GetInst(); 뭘로해도 상관 없다.
	//  static ConsoleScreen* GetInst(); 뭘로해도 상관 없다.
	//	static void Destroy();

private:
	static ConsoleScreen* MainScreen;


public:
	static ConsoleScreen& GetInst();
	static void Destroy();

public:
	// ConsoleScreen GetScreen();

	// 싱글톤 첫번째.
	// 


	ConsoleVector GetSize()
	{
		return Size_;
	}

	// 화면의 글자를 동적으로 할당하여 메모리를 만들어내는 작업
	void CreateScreen(int _Width, int _Height, const char* _DefaultValue);

	// DefaultPixel_의 문자열 앞쪽 2바이트로 화면을 전부 초기화 한다.
	void RenderStart();

	// PixelData_의 내용을 모두 화면에 출력한다.
	void RenderEnd();

	// X Y위치에 글자를 출력한다.
	void SetPixel(ConsoleVector _Pos, const char* _DefaultValue);
	void SetPixel(int _X, int _Y, const char* _DefaultValue);



private:
	// constrcuter destructer
	ConsoleScreen();

	ConsoleScreen(int _Width, int _Height, const char* _DefaultValue);
	~ConsoleScreen();

	// delete Function
	ConsoleScreen(const ConsoleScreen& _Other) = delete;
	ConsoleScreen(ConsoleScreen&& _Other) noexcept = delete;
	ConsoleScreen& operator=(const ConsoleScreen& _Other) = delete;
	ConsoleScreen& operator=(ConsoleScreen&& _Other) noexcept = delete;



protected:

private:
	ConsoleVector Size_;
	char** PixelData_;
	char DefaultPixel_[3];

};

