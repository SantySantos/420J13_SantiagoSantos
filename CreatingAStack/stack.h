#pragma once

#include <iostream>

using namespace std;

template <typename T>
class stack
{
private:
    
    int Size = 10;

    T* myArr = new T[Size];
    
    ~stack()
    {
        delete[] myArr;
    }
    
public:
    int size()
    {
        return Size;
    }

    bool isEmpty()
    {
        if (myArr[0] = NULL)
        {
            return true;
        }
        
        return false;
    }

    void Pop();

    void Push(T);   
    
};
