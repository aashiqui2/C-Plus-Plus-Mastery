#include "person.h"
#include "engineer.h"

Engineer::Engineer()
{
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name() << ",age : " << operand.get_age() << ",address : " << operand.get_address() << ",contract_count : " << operand.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}
