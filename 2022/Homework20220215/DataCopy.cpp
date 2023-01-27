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
void DataCopy::CheakSize(int _Size)
{
    if (Size_>_Size)
    {
        Cheak_ = 1;
    }
    else if (Size_ <=_Size)
    {
        Cheak_ = 2;
    }
}

void DataCopy::operator=(const DataCopy& _Other)
{
    CheakSize(_Other.Size_);
    if (Cheak_ == 1)
    {
        for (int i = 0; i < _Other.Size_; i++)
        {
            ArrData_[i] = _Other.ArrData_[i];
        }
        for (int i=_Other.Size_; i<Size_;i++)
        {
            ArrData_[i] = 0;
        }
    }
    if (Cheak_ == 2)
    {
        for (int i=0;i<Size_;i++)
        {
            ArrData_[i] = _Other.ArrData_[i];
        }
    }
    return;
}

void DataCopy::AllValueSetting(const DataType& Data)
{
    for (int  i = 0; i < this->Size_; i++)
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