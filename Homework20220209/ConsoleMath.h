#pragma once
class ConsoleMath
{
public:// 어디서든 참조 가능
	// constrcuter destructer
	ConsoleMath();//생성자
	~ConsoleMath();//소멸자

	// delete Function
	ConsoleMath(const ConsoleMath& _Other) = delete;//복사 생성자
	ConsoleMath(ConsoleMath&& _Other) noexcept = delete;//레퍼런스 생성자
	ConsoleMath& operator=(const ConsoleMath& _Other) = delete;//대입연산자(복사)
	ConsoleMath& operator=(ConsoleMath&& _Other) noexcept = delete;//Rvalue 레퍼런스 생성자
protected:// 상속관계일 경우 참조 가능

private://해당 클래스에서만 참조 가능

};