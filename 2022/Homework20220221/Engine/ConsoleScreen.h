#pragma once
#include "ConsoleMath.h"
#include <assert.h>

// �̱����� ���α׷����� ������ �������� ¥�»�� �����Դϴ�.
// ������ �������� ���� �׷��� ¥��
// �̰� �����̶�� �մϴ�.
// �� �߿��� �����ϰ�
// ���±��� ���� ��� �������α׷��ӵ��� �� �˰� �����鼭
// ���� ��� ��������� ���غô� ������ �ִµ� �̱���
// �̱��� => ��� ��ü�� 1���� ��������� �����ϴ� �����Դϴ�.

// ���� :
class ConsoleScreen
{
	//  static ConsoleScreen MainScreen;


		//  Value�� �̱���
	//private:
	//	static ConsoleScreen MainScreen;
	//public:
	//	static ConsoleScreen& GetInst();

	//private:
	//	static ConsoleScreen* MainScreen;
	//
	//public:
	//	static ConsoleScreen& GetInst(); �����ص� ��� ����.
	//  static ConsoleScreen* GetInst(); �����ص� ��� ����.
	//	static void Destroy();

private:
	static ConsoleScreen* MainScreen;


public:
	static ConsoleScreen& GetInst();
	static void Destroy();

public:
	// ConsoleScreen GetScreen();

	// �̱��� ù��°.
	// 


	ConsoleVector GetSize()
	{
		return Size_;
	}

	// ȭ���� ���ڸ� �������� �Ҵ��Ͽ� �޸𸮸� ������ �۾�
	void CreateScreen(int _Width, int _Height, const char* _DefaultValue);

	// DefaultPixel_�� ���ڿ� ���� 2����Ʈ�� ȭ���� ���� �ʱ�ȭ �Ѵ�.
	void RenderStart();

	// PixelData_�� ������ ��� ȭ�鿡 ����Ѵ�.
	void RenderEnd();

	// X Y��ġ�� ���ڸ� ����Ѵ�.
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

