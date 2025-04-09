#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A()
    {
        cout << "Display Method in A" << endl;
    }
};
// class B : public A
class B : virtual public A
{
public:
    B()
    {
        cout << "Display Method in B" << endl;
    }
};
// class C : public A
class C : virtual public A
{
public:
    C()
    {
        cout << "Display Method in C" << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "Display Method in D" << endl;
    }
};
int main()
{
    D d;
   // d.x = 2; // ambigious instead of creating another copy we can inherit in virtual
   d.x=2;

    return 0;
}