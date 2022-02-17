#include"Datacopy.h"

int DataCopy::GetSize()
{
    return Size_;
}
DataType& DataCopy::operator[](int _Index)
{
    if (Size_ < -_Index)
    {
        assert(false);
    }
    return ArrData_[_Index];
}

void DataCopy::Release()
{
    if (nullptr != ArrData_)
    {
        delete[] ArrData_;
        ArrData_ = nullptr;
    }
}
void DataCopy::operator=(const DataCopy& _Other)
{
    ReSize(_Other.Size_);

    for (size_t i = 0; i < this->Size_; i++)
    {
        this->ArrData_[i] = _Other.ArrData_[i];
    }

    return;
}

void DataCopy::AllValueSetting(const DataType& Data)
{
    for (size_t i = 0; i < this->Size_; i++)
    {
        this->ArrData_[i] = Data;
    }
}

void DataCopy::ReSize(unsigned int _Size)
{
    Release();
    ArrData_ = new DataType[_Size];
    Size_ = _Size;
}

DataCopy::DataCopy(unsigned int _Size)
    :Size_(0)
    , ArrData_(nullptr)
{
    ReSize(_Size);
}
DataCopy::~DataCopy()
{
    Release();
}