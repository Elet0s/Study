#pragma once
class Sort
{
public:
	Sort();
	~Sort();


	Sort(const Sort& _Other) = delete;
	Sort(Sort&& _Other) noexcept = delete;
	Sort& operator=(const Sort& _Other) = delete;
	Sort& operator=(Sort&& _Other) noexcept = delete;
protected:

private:

};