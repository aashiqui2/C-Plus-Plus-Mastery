#include <iostream>
#include <string>
using namespace std;
template <typename T>
T maximum(T a, T b)
{
    return (*a > *b) ? a : b;
}


/* int * maximum(int *a, int *b)
{
    return (*a > *b) ? a : b;
}

int & maximum(int &a, int &b)
{
    return (a > b) ? a : b;
} */


int main()
{

    int x{5};
    int y{7};

    int *p_x{&x};
    int *p_y{&y};

 /*    auto result = maximum(x, y);
    cout << "result : " << result << endl;

    auto result = maximum(p_x, p_y);
    cout << "result : " << *result << endl; */
    
    auto result = maximum(p_x, p_y);
    cout << "result : " << *result << endl;


    return 0;
}