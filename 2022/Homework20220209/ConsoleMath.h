#pragma once
class ConsoleMath
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	ConsoleMath();//������
	~ConsoleMath();//�Ҹ���

	// delete Function
	ConsoleMath(const ConsoleMath& _Other) = delete;//���� ������
	ConsoleMath(ConsoleMath&& _Other) noexcept = delete;//���۷��� ������
	ConsoleMath& operator=(const ConsoleMath& _Other) = delete;//���Կ�����(����)
	ConsoleMath& operator=(ConsoleMath&& _Other) noexcept = delete;//Rvalue ���۷��� ������
protected:// ��Ӱ����� ��� ���� ����

private://�ش� Ŭ���������� ���� ����

};

class ConsoleVector
{
public:
	int x_;
	int y_;
	ConsoleVector()
		:x_(0),y_(0)
	{
	}
	ConsoleVector(int _x, int _y)
		:x_(_x), y_(_y)
	{

	}
	ConsoleVector GetHalfVector()
	{
		return { x_ / 2,y_ / 2 };
		//ConsoleVector(x_/2,y_/2);
	}

	ConsoleVector operator+(ConsoleVector& _Other)
	{
		ConsoleVector Result;
		Result.x_ = x_ + _Other.x_;
		Result.y_= y_ + _Other.y_;
		return Result;
	}
	ConsoleVector operator+=(ConsoleVector& _Other)
	{
		x_ += _Other.x_;
		y_ += _Other.y_;
		return *this;
	}
};