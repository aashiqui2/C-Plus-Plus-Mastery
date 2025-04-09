#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Display Method in A" << endl;
    }
};
// class B : public A
class B : virtual public A //only create one shared instance of A, 
{
public:
    void show()
    {
        cout << "show method in B" << endl;
    }
};
// class C :  public A
class C : virtual public A
{
};
class D : public B, C
{
};
int main()
{
    D d;
    d.show();
    d.display(); // ambiguity

    return 0;
}