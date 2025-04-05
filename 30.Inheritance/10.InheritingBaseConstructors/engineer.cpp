#include "person.h"
#include "engineer.h"
#include <iostream>

/*
Engineer::Engineer()
{
    cout << "Default constructor for Engineer called..." << endl;
}


Engineer::Engineer(const Engineer& source): Person(source), contract_count(source.contract_count)
{
    cout << "Custom copy constructor for Engineer called..." << endl;
}
*/

Engineer::Engineer(string_view fullname, int age, string_view address, int contract_count_param): Person(fullname, age, address), contract_count(contract_count_param)
{
    cout << "Custom constructor for Engineer called..." << endl;
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name() << ",age : " << operand.get_age() << ",address : " << operand.get_address() << ",contract_count : " << operand.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}
