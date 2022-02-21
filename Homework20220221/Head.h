#pragma once
#include <list>
#include "GameBlock.h"
// Ό³Έν :
class Body;
class Head : public GameBlock
{
public:
	// constrcuter destructer
	Head();
	~Head();

	// delete Function
	Head(const Head& _Other) = delete;
	Head(Head&& _Other) noexcept = delete;
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;

protected:
	void Update() override;

	void OverLap(ConsoleObject* _Other);

private:
	std::list<Body*> AllBody;
};

