
//headers
#include <iostream>
#include <string>
#include <limits>
#include "userAccount.h"

using namespace std;

int getID(const string& message, const string& errorMessage, const string& acceptedMessage, int minNumber, int maxNumber);
string User(const string& message, const string& errorMessage);

int main()
{
    int tempID = getID("please create an ID: ", "please enter a valid number", "Your ID is: ", 0, 9999);
    string tempUsername = User("please enter your username: ","please write something");
    string tempPassword = User("Please enter your password:" , "please write something");
    userAccount newUser (tempID, tempUsername, tempPassword);
    cout << "Account created correctly!" << endl;
        
    while (!newUser.login(newUser.username, newUser.password))
    {
        cout << "Invalid username or password." << "\n" << "Try Again" << endl;
    }
    cout << "Login Succesful!" << endl;
    cout << "Account ID: " << newUser.id << endl;
    return 0;
}

int getID(const string& message, const string& errorMessage, const string& acceptedMessage,int minNumber, int maxNumber)
{
    int number;
    while (true) {
        cout << message;
        cin >> number;

        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << errorMessage << endl;
            continue;
            
        }
        if (number < minNumber || number > maxNumber) 
        {
            cout << errorMessage << endl;
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return number;
    }
}

string User(const string& message, const string& errorMessage)
{
    string input;
    cout << message; 
    getline(cin, input);
    bool isValid = false;

    while(!isValid)
    {
        if (input.empty()) 
        {
            cout << errorMessage << "\n" << message ;
            getline(cin, input);
        }
            
        else
            isValid = true;
    }

    return input;  
}



