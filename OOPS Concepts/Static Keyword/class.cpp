#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void incr()
    {
        x++;
    }
};
int main()
{
    A obj;
    obj.x=0;
    cout << obj.x << endl;
    obj.incr();
    cout << obj.x << endl;

    return 0;
}