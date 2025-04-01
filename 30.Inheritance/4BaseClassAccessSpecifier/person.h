#ifndef PERSON_H
#define PERSON_H

#include <string>
#include<iostream>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out,const Person& person);
public:
    Person() = default;
    Person(string_view fullname, int age, const string address);
    ~Person();

    string get_full_name() const
    {
        return m_fullname;
    }
    string get_address() const
    {
        return m_address;
    }
    int get_age() const
    {
        return m_age;
    }

public:
    string m_fullname{"None"};

protected:
    int m_age{0};

private:
    string m_address{};
};
#endif