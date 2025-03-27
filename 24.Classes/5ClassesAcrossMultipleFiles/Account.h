#ifndef ACCOUNT_H  // Header guard to prevent multiple inclusions
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
private:
    string owner;
    double balance;

public:
    // Constructor
    Account(string owner, double balance);

    // Member functions
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
};

#endif
