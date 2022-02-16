#include"Sizecopy.h"

int Sizecopy::GetSize()
{
    return Size_;
}
DataType& Sizecopy::operator[](int _Index)
{
    if (Size_ < -_Index)
    {
        assert(false);
    }
    return ArrData_[_Index];
}

void Sizecopy::Release()
{
    if (nullptr != ArrData_)
    {
        delete[] ArrData_;
        ArrData_ = nullptr;
    }
}
void Sizecopy::operator=(const Sizecopy& _Other)
{
    ReSize(_Other.Size_);

    for (size_t i = 0; i < this->Size_; i++)
    {
        this->ArrData_[i] = _Other.ArrData_[i];
    }

    return;
}

void Sizecopy::AllValueSetting(const DataType& Data)
{
    for (size_t i = 0; i < this->Size_; i++)
    {
        this->ArrData_[i] = Data;
    }
}

void Sizecopy::ReSize(unsigned int _Size)
{
    Release();
    ArrData_ = new DataType[_Size];
    Size_ = _Size;
}

Sizecopy::Sizecopy(unsigned int _Size)
    :Size_(0)
    , ArrData_(nullptr)
{
    ReSize(_Size);
}
Sizecopy::~Sizecopy()
{
    Release();
}