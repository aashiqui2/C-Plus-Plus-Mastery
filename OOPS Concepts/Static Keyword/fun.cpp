#include <iostream>
using namespace std;
void func()
{
    // int x = 0;
    static int x = 0;//created and initialised once for the lifetimne of the program
    cout << "x :" << x << endl;
    x++;
}
int main()
{
    func();
    func();
    func();

    return 0;
}