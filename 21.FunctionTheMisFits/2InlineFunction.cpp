#include <iostream>
using namespace std;
inline int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int a{15};
    int b{8};
    cout << "max : " << max(a, b) << endl; // Function body is inserted here

    // What the compiler might do to inline your function call
    cout << "max : ";
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}