#include <iostream>
#include <concepts>
#include <string>

using namespace std;
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

  bool myTrue = 12;
    if (myTrue == true)
        cout << "true" << endl;
    else
        cout << "nicolasbby" << endl;

    getchar();
    return 0;
}
