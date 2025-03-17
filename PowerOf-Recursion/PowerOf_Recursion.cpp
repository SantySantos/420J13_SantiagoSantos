#include <iostream>

using namespace std;


int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y - 1);
    }
}

double exponential(double x, double n)
{
    
    if (x == 10)
        return 0;
    else
    {
        return x + (power(x,x + 1) - exponential(x + 1 , n));
    }
}
int main()
{
    double number = exponential(1,1);
    cout << number << endl;
    return 0;
}
