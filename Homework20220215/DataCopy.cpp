#include"DataCopy.h"

int DataCopy::GetSize()
{
	return Size_;
}
DataType& DataCopy::operator[](int _Index)
{
	//if (Size_ < -_Index)
//	{
	//	assert(false);
	//}
	return ArrData1_[_Index];
}
void DataCopy::CheakSize(unsigned int _Size)
{
    if (Cheak_ != 0)
    {
        if (Size_ < _Size)
        {
            Cheak_ = 1;
            //나보다 크니까 보존하고 남는부분
        }
        else if (Size_ >= _Size)
        {
            Cheak_ = 2;
        }
    }
    else
    {
        Cheak_ += 1;
    }
}
 void DataCopy::Release(unsigned int _Size)
{

    if (nullptr != ArrData1_)
    {
        delete[] ArrData1_;
        ArrData1_ = nullptr;
    }
}
 void DataCopy::operator=(const DataCopy& _Other)
{
     CheakSize(_Other.Size_);
    if (Cheak_ == 1)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            ArrData2_[i]= ArrData1_[i];
        }
        int Xsze = Size_;
        ReSize(_Other.Size_);
        for (size_t i = 0; i < Xsze; i++)
        {
          ArrData1_[i] = ArrData2_[i];
        }
        for (size_t i = Xsze; i < Size_; i++)
        {
            ArrData1_[i] = 0;
        }
    }
    else if (Cheak_ == 2)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData2_[i] = this->ArrData1_[i];
        }
        ReSize(_Other.Size_);
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData1_[i] = this->ArrData2_[i];
        }
    }

    return;
}

 void DataCopy::AllValueSetting(const DataType& Data)
{
    for (size_t i = 0; i < this->Size_; i++)
    {
        this->ArrData1_[i] = Data;
    }
}

void DataCopy::ReSize(unsigned int _Size)
{
    Release(_Size);
    ArrData1_ = new DataType[_Size];
    Size_=_Size;
    if (Cheak_ == 0)
    {
        ArrData2_ = new DataType[_Size];
    }
}

DataCopy::DataCopy(unsigned int _Size)
	:Size_(0)
    ,Cheak_(0)
	,ArrData1_(nullptr)
    ,ArrData2_(nullptr)
{
	ReSize(_Size);
}
DataCopy::~DataCopy()
{
    Size_ = 0;
	Release(Size_);
    if (nullptr != ArrData2_)
    {
        delete[] ArrData1_;
        ArrData1_ = nullptr;
    }
}