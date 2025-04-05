#include "person.h"
#include <iostream>

Person::Person()
{
    cout << "Default constructor for Person called..." << endl;
}

Person::Person(string_view fullname, int age, string_view address) : m_full_name{fullname}, m_age{age}, m_address{address}
{
    cout << "Custom constructor for Person called..." << endl;
}

Person::Person(const Person &source): m_full_name(source.m_full_name), m_age(source.m_age),m_address(source.m_address)
{
    cout << "Custom copy constructor for Person called..." << endl;
}

void Person::do_something() const
{
    cout << "Hello" << endl;
}

ostream &operator<<(ostream &out, const Person &person)
{
    out << "Person [Full name :" << person.get_full_name() << ", Age:" << person.get_age() << ", Address:" << person.get_address() << "]";
    return out;
}

Person::~Person()
{
    cout << "Destructor for Person called .." << endl;
}
