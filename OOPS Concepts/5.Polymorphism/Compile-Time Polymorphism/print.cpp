#include <iostream>
using namespace std;
class Print
{
    //! function Overloading
public:
    void show(int x)
    {
        cout << "int :" << x << endl;
    }
    void show(char ch)
    {
        cout << "char :" << ch << endl;
    }
};
int main()
{
    Print p1;
    p1.show(2);
    Print p2;
    p2.show('a');

    return 0;
}