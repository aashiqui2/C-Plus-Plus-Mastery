#include <iostream>
using namespace std;
class Stduent
{
public:
    string name;

    // Compile-Time Polymorphism
    Stduent()
    {
        cout<<"Non-Parameterized Constructor"<<endl;
    }
    Stduent(string name)
    {
        this->name=name;
        cout<<"Parameterized Constructor"<<endl;
    }
};
int main()
{
    Stduent s1;
    Stduent s2("aashiqui");

    return 0;
}