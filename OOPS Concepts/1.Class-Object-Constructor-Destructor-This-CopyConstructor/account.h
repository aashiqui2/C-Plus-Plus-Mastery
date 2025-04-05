
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    string accountId;
    string username;

private: // data hiding
    double balance;
    string password;
};
#endif