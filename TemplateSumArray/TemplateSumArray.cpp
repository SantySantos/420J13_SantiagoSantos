#include <iostream>
#include <concepts>

//to complete
template<typename Num>
concept Numeric = std::is_arithmetic_v<Num>;

template<Numeric T>
class mySumArray {
private:
    size_t size;
    T = data <T>[]; 
    public:
    mySumArray(size_t size) : size(size), data(new T[size]) {}

    ~mySumArray() {
        delete[] data;
    }
};

int main()
{
    
}

