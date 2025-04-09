#include <iostream>
using namespace std;
// Declarations
void f1();
void f2();
void f3();

void exception_thrower()
{
    cout << "starting exception_thrower()" << endl;
    throw 0; // Execution will half from here
    cout << "ending exception_thrower()" << endl;
}

int main()
{

    try
    {
        f1();
    }
    catch (int ex)
    {
        cout << "Handling execution in main()" << endl;
    }
    cout << "main() finishing up" << endl;

    return 0;
}

// Definitions

void f1()
{
    cout << "Starting f1()" << endl;
    try
    {
        f2();
    }
    catch (int ex)
    {
        cout << "Exception handled in f1()" << endl;
    }
    cout << "Ending f1()" << endl;
}

void f2()
{
    cout << "Starting f2()" << endl;
    try
    {
        f3();
    }
    catch (int ex)
    {
        cout << "Exception handled in f2()" << endl;
    }
    cout << "Ending f2()" << endl;
}

void f3()
{
    cout << "Starting f3()" << endl;
    try
    {
        exception_thrower();
    }
    catch (int ex)
    {
        cout << "Exception handled in f3()" << endl;
    }
    cout << "Ending f3()" << endl;
}