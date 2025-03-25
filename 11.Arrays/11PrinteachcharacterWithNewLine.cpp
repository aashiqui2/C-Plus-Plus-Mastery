#include <iostream>
using namespace std;
int main()
{
    int *s{new int[5]{1, 2, 3, 4, 5}};
    for (int i = 0; i < 5; i++)
    {
        cout << *(s + i) << endl;
    }
    return 0;
}