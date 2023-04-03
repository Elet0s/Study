#pragma once
#include "ConsoleObject.h"

// Ό³Έν :
class Monster : public ConsoleObject
{
public:
	// constrcuter destructer
	Monster();
	Monster(TextScreen* _Screen, const char* _Text, const ConsoleVector& _Pos, const ConsoleVector& _Lange);
	~Monster();

	// delete Function
	Monster(const Monster& _Other) = delete;
	Monster(Monster&& _Other) noexcept = delete;
	Monster& operator=(const Monster& _Other) = delete;
	Monster& operator=(Monster&& _Other) noexcept = delete;

	void Update();

protected:

private:
};