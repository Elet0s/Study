#include"SizeCopy.h"

int SizeCopy::GetSize()
{
	return SizeA_;
}
int SizeCopy::GetIndex(int _Index)
{
    return ArrData1_[_Index];
}
DataType& SizeCopy::operator[](int _Index)
{
	return ArrData1_[_Index];
}
void SizeCopy::CheakSize(unsigned int _Size)
{
    if (SizeA_ < _Size)
    {
        Cheak_ = 1;
    }
    else if (SizeA_ >= _Size)
    {
        Cheak_ = 2;
    }
}
void SizeCopy::Release(int _a)
{
    if (_a == 1)
    {
        if (nullptr != ArrData1_)
        {
            delete[] ArrData1_;
            ArrData1_ = nullptr;
        }
    }
    else
    {
        if (nullptr != ArrData2_)
        {
            delete[] ArrData2_;
            ArrData2_ = nullptr;
        }
    }
}
 void SizeCopy::operator=(const SizeCopy& _Other)
{
     CheakSize(_Other.SizeA_);
     SizeB_ = SizeA_;
     for (int i = 0; i < SizeA_; i++)
     {
         ArrData2_[i] = ArrData1_[i];
     }
     ReSizeA(_Other.SizeA_);
     if (Cheak_ == 1)
     {
         for (size_t i = 0; i < SizeB_; i++)
         {
             ArrData1_[i] = ArrData2_[i];
         }
         for (size_t i = SizeB_; i < SizeA_; i++)
         {
             ArrData1_[i] = 0;
         }
     }
     else if (Cheak_ ==2)
     {
         for (size_t i = 0; i < SizeA_; i++)
         {
             ArrData1_[i] = ArrData2_[i];
         }
     }
     ReSizeB(SizeA_);
}

 void SizeCopy::AllValueSetting(const DataType& Data)
{
    for (size_t i = 0; i < this->SizeA_; i++)
    {
        this->ArrData1_[i] = Data;
    }
}

void SizeCopy::ReSizeA(unsigned int _Size)
{
    Release(1);
    SizeA_=_Size;
    ArrData1_ = new DataType[_Size];    
}
void SizeCopy::ReSizeB(unsigned int _Size)
{
    Release(2);
    ArrData2_ = new DataType[_Size];
}
SizeCopy::SizeCopy(unsigned int _Size)
	:SizeA_(0)
    ,a_(0)
    ,SizeB_(0)
    ,Cheak_(0)
	,ArrData1_(nullptr)
    ,ArrData2_(nullptr)
{
	ReSizeA(_Size);
    ReSizeB(_Size);
}
SizeCopy::~SizeCopy()
{

}