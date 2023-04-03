#pragma once
#include "ConsoleMath.h"
#include "ConsoleScreen.h"



// ���� :
class ConsoleObject
{
public:
	ConsoleObject();

	// constrcuter destructer
	ConsoleObject(
		const char* _Text,
		const ConsoleVector& _Pos);

	~ConsoleObject();

	// delete Function
	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

	inline ConsoleVector GetPos() const
	{
		return Pos_;
	}

	inline void SetPos(const ConsoleVector& _Value)
	{
		Pos_ = _Value;
	}

	inline void SetMove(const ConsoleVector& _Value)
	{
		Pos_ += _Value;
	}


	virtual void Update();
	virtual void Render();
	virtual void OverLap(ConsoleObject* _Other);
	bool OverLapCheck(const ConsoleObject* _Other);


	void SetRenderChar(const char* _Text);
	void InScreenMovement(const ConsoleVector& _Vector);


	inline void Init(const ConsoleVector& _Value, const char* _Text)
	{
		SetPos(_Value);
		SetRenderChar(_Text);
	}

	inline void Death()
	{
		IsDeath_ = true;
	}

	inline bool GetIsDeath()
	{
		return IsDeath_;
	}

protected:

private:
	bool IsDeath_;
	// Has a �����̶�� �մϴ�.
	// �÷��̾�� ������ �ʹ����� ���� 
	// ���� �� ������ ������ ���� ������ �Ѵٸ�
	// ���̳� �����Ҵ�� �ڽŸ��� �޸𸮸� ������ �Ѵ�.

	ConsoleVector Pos_;
	// ���� ���̴�.
	char Text_[3];
};

