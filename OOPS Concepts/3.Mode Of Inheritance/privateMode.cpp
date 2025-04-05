#include <iostream>
#include "main.cpp"
using namespace std;
class checkPrivate : public privateDerived
{
public:
    void print_info()
    {
        //cout << x << endl;//cannot access
        //cout << y << endl;//cannot access
        // cout<<z<<endl;cannpt access private in derived class
    }
};
int main()
{

    return 0;
}