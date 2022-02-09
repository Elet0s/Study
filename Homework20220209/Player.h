#pragma once
class Player
{
public:// 어디서든 참조 가능
	// constrcuter destructer
	Player();//생성자
	~Player();//소멸자

	// delete Function
	Player(const Player& _Other) = delete;//복사 생성자
	Player(Player&& _Other) noexcept = delete;//레퍼런스 생성자
	Player& operator=(const Player& _Other) = delete;//대입연산자(복사)
	Player& operator=(Player&& _Other) noexcept = delete;//Rvalue 레퍼런스 생성자
protected:// 상속관계일 경우 참조 가능

private://해당 클래스에서만 참조 가능

};