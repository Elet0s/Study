#pragma once
class Malloc
{
private:
	// constrcuter destructer
	Malloc();
	~Malloc();

	// delete Function
	Malloc(const Malloc& _Other) = delete;
	Malloc(Malloc&& _Other) noexcept = delete;
	Malloc& operator=(const Malloc& _Other) = delete;
	Malloc& operator=(Malloc&& _Other) noexcept = delete;
};