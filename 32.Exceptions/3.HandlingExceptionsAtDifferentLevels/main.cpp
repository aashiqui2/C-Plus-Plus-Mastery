#include <iostream>
using namespace std;

// Declarations
void f1();
void f2();
void f3();

void exception_thrower()
{
    cout << "starting execution_thrower()" << endl;
    throw 0;
   /*  try
    {
        throw 0; // Execution will halt from here
    }
    catch (int ex)
    {
        cout << "Something went wrong" << endl;
    }
    cout << "ending execution_thrower()" << endl; */
}

int main()
{

    f1();

    /*
    try{
        f1();
    }catch(int ex){
        cout << "Handling execution in main()" << endl;
    }
    */

    cout << "END." << endl;

    return 0;
}

// Definitions:
//! Regular flow

/* void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "Ending f1()" << endl;
}

void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "Ending f2()" << endl;
}

void f3()
{
    cout << "Starting f3()" << endl;
    cout << "Ending f3()" << endl;
} */

//*******************************************************************************
// Exception thrown from f3() scope : Not handled anywhere

/* void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "Ending f1()" << endl;
}

void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "Ending f2()" << endl;
}

void f3()
{
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "Ending f3()" << endl;
} */

//*******************************************************************************
//! Exception thrown from f3() scope : Handled in f3()

/* void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "Ending f1()" << endl;
}

void f2()
{
    cout << "Starting f2()" << endl;
    f3();
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
        cout << "Handling execution in f3()" << endl;
    }
    cout << "Ending f3()" << endl;
} */

//*******************************************************************************
//! Exception thrown from f3() scope : Handled in f2()
/*
void f1(){
    cout << "Starting f1()" << endl;
    f2();
    cout << "Ending f1()" << endl;
}

void f2(){
    cout << "Starting f2()" << endl;
    try{
        f3();
    }catch(int ex){
        cout << "Handling execution in f2()" << endl;
    }
    cout << "Ending f2()" << endl;
}

void f3(){
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "Ending f3()" << endl;
}
*/

//*******************************************************************************
//! Exception thrown from f3() scope : Handled in f1()
/*
void f1(){
    cout << "Starting f1()" << endl;
    try{
        f2();
    }catch(int ex){
        cout << "Handling execution in f1()" << endl;
    }
    cout << "Ending f1()" << endl;
}

void f2(){
    cout << "Starting f2()" << endl;
    f3();
    cout << "Ending f2()" << endl;
}

void f3(){
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "Ending f3()" << endl;
}
*/

//*******************************************************************************

//! Exception thrown from f3() scope : Handled in main

/* void f1(){
    cout << "Starting f1()" << endl;
    f2();
    cout << "Ending f1()" << endl;
}

void f2(){
    cout << "Starting f2()" << endl;
    f3();
    cout << "Ending f2()" << endl;
}

void f3(){
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "Ending f3()" << endl;
} */
