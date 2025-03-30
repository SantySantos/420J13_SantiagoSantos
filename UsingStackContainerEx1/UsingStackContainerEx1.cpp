#include <iostream>
#include <Windows.h>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    std::string userSentence;
    cout << "Please enter the sentence you want to invent" << endl;
    getline(cin, userSentence);

    istringstream iss(userSentence);
    std::string word; 

    stack<std::string> stack1;
    
    while (iss >> word)
    {
        stack1.push(word);    
    }
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    
   
    
    return 0;
}
