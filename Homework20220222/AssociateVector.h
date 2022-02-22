#pragma once
#include<iostream>
#include<assert.h>
class AssociateVector
{
private:
	int Size_;
	int* ArrData_;

public:
	int GetCapacity()
	{
		return Size_;
	}

	int& GetData(int  _Index) const
	{
		return ArrData_[_Index];
	}

	int& operator[](int _Index)
	{
		if (Size_ <= _Index)
		{
			assert(false);
		}
		return ArrData_[_Index];
	}
	inline void operator=(const AssociateVector& _Other)
	{
		ReSize(_Other.Size_);
		for (int i = 0; i < this->Size_; i++)
		{
			this->ArrData_[i] = _Other.ArrData_[i];
		}
		return;
	}
	inline void AllvalueSetting(const int& _Data)
	{
		for (int i = 0; i < this->Size_; i++)
		{
			this->ArrData_[i] = _Data;
		}
	}
	inline void Release()
	{
		if (nullptr != ArrData_)
		{
			delete[] ArrData_;
			ArrData_ = nullptr;
		}
	}
	inline void ReSize(int _Size)
	{
		int* PrevData = ArrData_;
		ArrData_ = new int[_Size];

		int Size = Size_ > _Size ? _Size : Size_;

		for (int i = 0; i < Size; i++)
		{
			ArrData_[i] = PrevData[i];
		}
		if (nullptr != PrevData)
		{
			delete PrevData;
			PrevData = nullptr;
		}
		Size_ = _Size;
	}

public:
	AssociateVector()
		:ArrData_(nullptr)
		, Size_(0)
	{
	}
	AssociateVector(int _Size)
		:ArrData_(nullptr)
		, Size_(0)
	{
		ReSize(_Size);
	}
	~AssociateVector()
	{
		Release();
	}
};