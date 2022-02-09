#pragma once
class Monster
{
public:// 어디서든 참조 가능
	// constrcuter destructer
	Monster();//생성자
	~Monster();//소멸자

	// delete Function
	Monster(const Monster& _Other) = delete;//복사 생성자
	Monster(Monster&& _Other) noexcept = delete;//레퍼런스 생성자
	Monster& operator=(const Monster& _Other) = delete;//대입연산자(복사)
	Monster& operator=(Monster&& _Other) noexcept = delete;//Rvalue 레퍼런스 생성자
protected:// 상속관계일 경우 참조 가능

private://해당 클래스에서만 참조 가능

};