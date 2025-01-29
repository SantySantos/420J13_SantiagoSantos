#pragma once
#include <string>
#include <iostream>

using namespace std;

class userAccount
{
    //defining our variables 
public:
    int id;
    string username;
    string password;

    userAccount(int id, const string& username, const string& password);
    
    bool login(const std::string& enteredusername, const std::string& enteredpassword);
  
};
