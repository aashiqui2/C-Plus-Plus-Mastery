#include "engineer.h"

Engineer::Engineer(string_view fullname, int age, const string &address, int contract_count) : Person{fullname, age, address}, contract_count{contract_count}
{
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [ " << operand.get_full_name() << " " << operand.get_age() << " " << operand.get_address() << " " << operand.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}