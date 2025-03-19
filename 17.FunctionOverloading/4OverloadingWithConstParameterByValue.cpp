#include <iostream>



void print(int x)
{
    std::cout << "Non-const int version: " << x << std::endl;
}

void print(const int x)  // Doesn't create a new overload
{
    std::cout << "Const int version: " << x << std::endl;
}

int main()
{
    print(10);  // Ambiguous error
    return 0;
}