#include <iostream>

int main()
{
    // Integer Type
    int myInt = 42;
    std::cout << "Integer: " << myInt << std::endl;

    // Floating-Point Type
    float myFloat = 3.14f;
    std::cout << "Float: " << myFloat << std::endl;

    // Double Type (More precision than float)
    double myDouble = 3.1415926535;
    std::cout << "Double: " << myDouble << std::endl;

    // Character Type
    char myChar = 'A';
    std::cout << "Character: " << myChar << std::endl;

    // Boolean Type
    bool myBool = true;
    std::cout << "Boolean: " << myBool << std::endl;

    // Wide Character Type (for Unicode characters)
    wchar_t myWideChar = L'A';
    std::wcout << L"Wide Character: " << myWideChar << std::endl;
    std::cout << "Wide character value:: " << myWideChar << std::endl;

    return 0;
}
