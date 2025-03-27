#include "Account.h"  // Include the header file

// Constructor definition
Account::Account(string owner, double balance) {
    this->owner = owner;
    this->balance = balance;
}

// Deposit function
void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Withdraw function
void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew: " << amount << ". Remaining Balance: " << balance << endl;
    } else {
        cout << "Invalid withdraw amount!" << endl;
    }
}

// Display function
void Account::display() const {
    cout << "Owner: " << owner << ", Balance: " << balance << endl;
}
