#pragma once
#pragma once
#include <assert.h>
template<typename DataType>
class GameArray
{
public:
    size_t Size_;
    DataType* DataPtr_;

public:
    size_t GetCapacity()
    {
        return Size_;
    }

    DataType& GetData(size_t _Index) const
    {
        return DataPtr_[_Index];
    }

    DataType& operator[](size_t _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return DataPtr_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);

        for (size_t i = 0; i < this->Size_; i++)
        {
            this->DataPtr_[i] = _Other.DataPtr_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->DataPtr_[i] = Data;
        }
    }


    inline void Release()
    {
        if (nullptr != DataPtr_)
        {
            delete[] DataPtr_;
            DataPtr_ = nullptr;
        }
    }

    void ReSize(size_t _Size)
    {
        // Release();
        DataType* PrevData = DataPtr_;
        DataPtr_ = new DataType[_Size];

        size_t Size = Size_ > _Size ? _Size : Size_;

        for (size_t i = 0; i < Size; i++)
        {
            DataPtr_[i] = PrevData[i];
        }

        if (nullptr != PrevData)
        {
            delete PrevData;
            PrevData = nullptr;
        }

        Size_ = _Size;
    }

public:
    GameArray()
        : DataPtr_(nullptr)
        , Size_(0)
    {
    }

    GameArray(size_t _Size)
        : DataPtr_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    GameArray(GameArray& _OtherValue)
        : DataPtr_()
        , Size_(_OtherValue.Size_)
    {
        ReSize(Size_);
    }

    GameArray(GameArray&& _OtherValue)
        : DataPtr_(_OtherValue.DataPtr_)
        , Size_(_OtherValue.Size_)
    {

    }

    ~GameArray()
    {
        Release();
    }
};

// using DataType = int;

template<typename DataType>
class SoltVector
{
private:
    GameArray<DataType> ArrData_;
    size_t Size_;

public:
    size_t capacity()
    {
        return ArrData_.GetCapacity();
    }

    size_t size()
    {
        return Size_;
    }

    void resize(size_t _SizeData)
    {
        ArrData_.ReSize(_SizeData);
        Size_ = _SizeData;
    }

    void reserve(size_t _SizeData)
    {
        ArrData_.ReSize(_SizeData);
    }

    void pop_Back()
    {
        --Size_;
    }

    void push_back(const DataType& _Data)
    {

        if (Size_ >= ArrData_.GetCapacity())
        {
            ArrData_.ReSize((size_t)((Size_ + 1) * 1.5f));
        }
        ArrData_[Size_] = _Data;
        ++Size_;
        Solt();
    }

    inline void Solt()
    {
        for (size_t j = 0; j < (Size_ - 1); j++)
        {

            for (size_t i = 0; i < Size_ - 1; i++)
            {
                if (this->ArrData_[i] > this->ArrData_[i + 1])
                {
                    size_t Dump = ArrData_[i + 1];
                    ArrData_[i + 1] = ArrData_[i];
                    ArrData_[i] = Dump;
                }
            }
        }
    }

    DataType& operator[](const size_t _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    void operator=(SoltVector&& _Other)
    {
        Size_ = _Other.Size_;
        ArrData_.DataPtr_ = _Other.ArrData_.DataPtr_;

        if (0 != _Other.Size_)
        {
            _Other.Size_ = 0;
            _Other.ArrData_.Size_ = 0;
            _Other.ArrData_.DataPtr_ = nullptr;
        }

    }
public:
    SoltVector()
        : Size_(0)
    {

    }

    SoltVector(const SoltVector& _Other)
        : Size_(_Other.Size_)
    {
        resize(_Other.Size_);

        ArrData_[0] = _Other.ArrData_.GetData(0);
    }

    // 이동생성자
    SoltVector(SoltVector&& _Other)
        : Size_(_Other.Size_)
    {
        ArrData_.DataPtr_ = _Other.ArrData_.DataPtr_;


        if (0 != _Other.Size_)
        {
            _Other.Size_ = 0;
            _Other.ArrData_.Size_ = 0;
            _Other.ArrData_.DataPtr_ = nullptr;
        }

    }

};

template<typename DataType>
class GameVectorSort
{
private:
    GameArray<DataType> ArrData_;
    size_t Size_;

public:
    size_t capacity()
    {
        return ArrData_.GetCapacity();
    }

    size_t size()
    {
        return Size_;
    }

    void resize(size_t _SizeData)
    {
        ArrData_.ReSize(_SizeData);
        Size_ = _SizeData;
    }

    void reserve(size_t _SizeData)
    {
        ArrData_.ReSize(_SizeData);
    }

    void pop_Back()
    {
        --Size_;
    }

    void push_back(const DataType& _Data)
    {
        //    0                 0
        if (Size_ >= ArrData_.GetCapacity())
        {
            ArrData_.ReSize((size_t)((Size_ + 1) * 1.5f));
        }

        // Push_back이 되었다면

        ArrData_[Size_] = _Data;
        ++Size_;

        // Sort처리
        for (int i = 0; i + 1 < Size_; i++)
        {
            if (ArrData_[i] > ArrData_[i + 1])
            {
                DataType TempData = ArrData_[i];
                ArrData_[i] = ArrData_[i + 1];
                ArrData_[i + 1] = TempData;
            }
        }

    }

    DataType& operator[](const size_t _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

public:
    GameVectorSort()
        : Size_(0)
    {

    }

    GameVectorSort(const GameVectorSort& _Other)
        : Size_(_Other.Size_)
    {
        resize(_Other.Size_);

        ArrData_[0] = _Other.ArrData_.GetData(0);
    }
};