#include <iostream>
using namespace std;
int main()
{
    // Integer Type
    int myInt = 42;
    cout << "Integer: " << myInt << endl;

    // Floating-Point Type
    float myFloat = 3.14f;
    cout << "Float: " << myFloat << endl;

    // Double Type (More precision than float)
    double myDouble = 3.1415926535;
    cout << "Double: " << myDouble << endl;

    // Character Type
    char myChar = 'A';
    cout << "Character: " << myChar << endl;

    // Boolean Type
    bool myBool = true;
    cout << "Boolean: " << myBool << endl;

    // Wide Character Type (for Unicode characters)
    wchar_t myWideChar = L'A';
    wcout << L"Wide Character: " << myWideChar << endl;
    cout << "Wide character value:: " << myWideChar << endl;

    return 0;
}
