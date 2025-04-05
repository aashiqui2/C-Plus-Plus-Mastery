#include <iostream>
using namespace std;
class base
{
public:
    int x=1;

protected:
    int y=2;

private:
    int z=3;
};

class publicDerived : public base
{
    // x is public
    // y is protected
    // z is private
public:
    void print_info()
    {
        cout << x << endl;
        cout << y << endl;
        // cout<<z<<endl;cannpt access private in derived class
    }
};
class protectedDerived : protected base
{
    // x is protected
    // y is protected
    // z is not accessible from protectedDerived
public:
    void print_info()
    {
        cout << x << endl;
        cout << y << endl;
        // cout<<z<<endl;cannpt access private in derived class
    }
};

class privateDerived : private base
{
    // x is private
    // y is private
    // z is not accessible from privateDerived
public:
    void print_info()
    {
        cout << x << endl;
        cout << y << endl;
        // cout<<z<<endl;cannpt access private in derived class
    }
};
int main()
{
    base b;
    cout << b.x<<endl; // able to access
    // cout<<b.y;//cannot access protected outside the class
    //  cout<<b.z;//cannot access private ouside class as well as in derived class

    privateDerived pd;
    pd.print_info();

    return 0;
}