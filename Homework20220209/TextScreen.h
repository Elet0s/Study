#pragma once
class TextScreen
{
public:// 어디서든 참조 가능
	// constrcuter destructer
	TextScreen();//생성자
	~TextScreen();//소멸자

	// delete Function
	TextScreen(const TextScreen& _Other) = delete;//복사 생성자
	TextScreen(TextScreen&& _Other) noexcept = delete;//레퍼런스 생성자
	TextScreen& operator=(const TextScreen& _Other) = delete;//대입연산자(복사)
	TextScreen& operator=(TextScreen&& _Other) noexcept = delete;//Rvalue 레퍼런스 생성자
protected:// 상속관계일 경우 참조 가능

private://해당 클래스에서만 참조 가능

};