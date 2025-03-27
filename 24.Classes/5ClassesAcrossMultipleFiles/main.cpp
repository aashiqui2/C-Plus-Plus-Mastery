#include "Account.h"  // Include the class header file

int main() {
    Account acc("Aashiq", 5000.0); // Create an account object
    acc.display();

    acc.deposit(1000);
    acc.withdraw(3000);
    acc.display();

    return 0;
}
