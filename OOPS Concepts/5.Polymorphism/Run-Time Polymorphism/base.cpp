#include <iostream>
using namespace std;
// Function Overriding in c++
class base
{
protected:
    int a, b;

public:
     void add()
    {
        cout << "\nEnter 2 Nos : " << endl;
        cin >> a >> b;
        cout << "Total : " << a + b << endl;
    }
};
class derived : public base
{
private:
    int c;

public:
    void add()
    {
        cout << "\nEnter 3 Nos : " << endl;
        cin >> a >> b >> c;
        cout << "Total : " << a + b + c << endl;
    }
    void show()
    {
        cout<<"i am from derived"<<endl;
    }
};
int main()
{
    // base b;
    // b.add();
    // derived d;
    // d.add();

    // base *b1 = new derived();
    // b1->add();

    derived d;
    base b=d;
    b.add();
    //b.show();// cannot able to access


    return 0;
}