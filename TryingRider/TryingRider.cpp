#include <iostream>
#include <concepts>
#include <string>

template<typename T>
concept numeric = std::is_arithmetic_v<T>;

class animals{
    public:
    int legs;
    std::string name;
    int age;
    

};
int main()
{
    
    std::cout << "Hello World!\n";  
    return 0;
}
