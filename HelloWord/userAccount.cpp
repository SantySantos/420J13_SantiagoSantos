
#include <iostream>
#include <string>
#include <limits>
#include "userAccount.h"

using namespace std;

userAccount::userAccount(int id, const string& username, const string& password)
{
    this->id = id;
    this->username = username;
    this->password = password;
}
bool userAccount::login(const std::string& enteredusername, const std::string& enteredpassword)
{
    string usernameTry;
    string passwordTry;
    cout << "\n" << "Login: " << endl;
    cout << "please enter your username: ";
    getline(cin, usernameTry);
    cout << "please enter your password: ";
    getline(cin, passwordTry);

    if (enteredusername == usernameTry && enteredpassword == passwordTry)
        return true;

    else
        return false;
}