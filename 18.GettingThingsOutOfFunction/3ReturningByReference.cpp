#include <iostream>
using namespace std;
int &max_return_reference(int &a, int &b)
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

int &sum(int &a, int &b)
{
    int result = a + b;
    return result; // Reference to local variable returned
}

int &max_input_by_value(int a, int b)
{
    if (a > b)
    {
        return a; // Reference to local variable returned
    }
    else
    {
        return b; // Reference to local variable returned
    }
}

int main()
{

    /* int x{14};
    int y{9};
    int &ref_max = max_return_reference(x, y); // Reference
    int val = max_return_reference(x, y);      // Copy

    cout << "ref_max : " << ref_max << endl;
    cout << "val : " << val << endl;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    ref_max++;

    cout << "----- " << endl;
    cout << "ref_max : " << ref_max << endl; // 15
    cout << "val : " << val << endl;         // 14
    cout << "x : " << x << endl;             // 15
    cout << "y : " << y << endl;             // 9
    */

    /* int x{14};
    int y{9};
    int &result = sum(x, y); // Reference
    cout << "result : " << result << endl; */

     int x{14};
     int y{9};
     int &result = max_input_by_value(x, y); // Reference
     cout << "result : " << result << endl;

     cout << "Done!" << endl; 

    return 0;
}