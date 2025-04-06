#include <iostream>
#include "stack.h"
#include <string>

using namespace std;

int main()
{
        stack<int> myStack;
        myStack.Push(1);
        cout << "Top element: " << myStack.Top() << endl;
    
    return 0;
}
