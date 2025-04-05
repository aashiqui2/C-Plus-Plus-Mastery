#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person()
    {
        cout << "Person constructor" << endl;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    ~Person()
    {
        cout << "Person destructor" << endl;
    }
};
#endif