#include <iostream>
using namespace std;
int main()
{

    // Print I love C++ 10 times
    /*
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    cout << "I love C++" << endl;
    */

    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do
    {
        cout << i << " : I love C++" << endl;
        ++i; // Incrementation
    } while (i < COUNT);

    cout << "Loop done!" << endl;

    //! got- to statement
    int num;

repeat: // Label
    cout << "Enter a positive number: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Invalid input! Try again." << endl;
        goto repeat; // Jump back to label
    }

    cout << "You entered: " << num << endl;

    return 0;
}
