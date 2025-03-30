#include "person.h"

Person::Person() = default;
Person::Person(string_view fullname, int age, string_view address) : m_fullname{fullname}, m_age{age}, m_address{address}
{
}

ostream &operator<<(ostream &out, const Person &person)
{
    out << "Person [  " << person.get_full_name() << " " << person.get_age() << " " << person.get_address() << "]";
    return out;
}

void Person::do_something() const
{
    cout << "Doing something" << endl;
}

Person::~Person()
{
}
