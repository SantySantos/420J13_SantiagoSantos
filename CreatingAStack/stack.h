#pragma once

#include <iostream>

using namespace std;

template <typename T>
class stack
{
private:
    
    int Size = 10;
    
    T* begin;
    T* end;
    
    T* myArr;

    void increaseArraySize()
    {
        T* tempArr = new T[Size * 2];
            for (int i = 0; i < Size; i++)
            {
                tempArr[i] = myArr[i];
            }
            delete[] myArr;
            myArr = tempArr;
            Size *= 2;
            end = myArr + Size;
    }
    
public:
    
    stack() : begin(nullptr), end(nullptr)
    {
        myArr = new T[Size];
        begin = myArr; //returns the position 0;
        end = myArr + Size;
    }
    ~stack()
    {
        delete[] myArr;
    }
    int size()
    {
        return Size;
    }

    bool isEmpty()
    {
        if (myArr == nullptr)
        {
            return true;
        }
        
        return false;
    }

    void Pop()
    {
        if (!isEmpty())
        {
            --end;
            myArr[end] = T();
        }
        
    }

    void Push(T value)
    {
        if (end == myArr + Size)
        {
            increaseArraySize();
        }
        myArr[end] = value;
        ++end;
    }   
};
