#include <iostream>


//modifiable variable
void print(int x)
{
    std::cout << "Non-const int version: " << x << std::endl;
}

//modifiable variable refrenece
// void print(int& x)
// {
//     std::cout << "Non-const int version: " << x << std::endl;
// }


//not modifiable variable
void print(const int& x)  // Doesn't create a new overload
{
    std::cout << "Const int version: " << x << std::endl;
}

int main()
{
    int a=10;
    print(a);  // Ambiguous error
    return 0;
}