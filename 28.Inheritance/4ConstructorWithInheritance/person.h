#ifndef PERSON_H
#define PERSON_H
#include <string>
#include<iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &, const Person &person);

public:
    Person();
    Person(string_view fullname, int age,
           string_view address);
    ~Person();

    // Getters
    string get_full_name() const
    {
        return m_fullname;
    }

    int get_age() const
    {
        return m_age;
    }

    string get_address() const
    {
        return m_address;
    }

    int add(int a, int b) const
    {
        return a + b;
    }

    int add(int a, int b, int c) const
    {
        return a + b + c;
    }

    void do_something() const;

public:
    string m_fullname{"None"};

protected:
    int m_age{0};

private:
    string m_address{"None"};
};
#endif