#include <iostream>
using namespace std;
class Parent
{
public:
    void getinfo()
    {
        cout << "parant class\n";
    }
    virtual void hello()
    {
        cout << "Hello from parent\n";
    }
};

class Child : public Parent
{
public:
    void getinfo()
    {
        cout << "child class\n";
    }
    void hello()
    {
        cout << "Hello from child\n";
    }
};
int main()
{
    // Child c1;
    // c1.getinfo();

    // Parent p1;
    // p1.getinfo();

    //! Object Slicing
    /* Child c;
    Parent p=c;
    p.hello(); */

    //! use a reference or pointer:
    Parent *p1 = new Child();
    p1->hello();

    return 0;
}

//!  Virtual Function:
/* 1. virtual Function are dynamic in nature.
2.Defined by keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
3.A virtual function is called during runtime. */