#pragma once
#include "GameBlock.h"

// ���� :
class Body : public GameBlock
{
public:
	// constrcuter destructer
	Body();
	~Body();

	// delete Function
	Body(const Body& _Other) = delete;
	Body(Body&& _Other) noexcept = delete;
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;

protected:

private:

};

