#include <iostream>

using namespace std;
//modifiable variable
void print(int x)
{
    cout << "Non-const int version: " << x << endl;
}

//modifiable variable refrenece
// void print(int& x)
// {
//     cout << "Non-const int version: " << x << endl;
// }


//not modifiable variable
void print(const int& x)  // Doesn't create a new overload
{
    cout << "Const int version: " << x << endl;
}

int main()
{
    int a=10;
    print(a);  // Ambiguous error
    return 0;
}