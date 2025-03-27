#include <iostream>
using namespace std;
size_t sum_up_to_zero(size_t value)
{
    if (value != 0)
        return value + sum_up_to_zero(value - 1);
    return 0;
}

int main()
{

    cout << "result : " << sum_up_to_zero(10) << endl;

    return 0;
}