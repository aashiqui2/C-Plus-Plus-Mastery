#include "person.h"
#include <iostream>

Person::Person(string_view fullname, int age,const string address)
    : m_full_name{fullname}, m_age{age},m_address{address}
{
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
}
