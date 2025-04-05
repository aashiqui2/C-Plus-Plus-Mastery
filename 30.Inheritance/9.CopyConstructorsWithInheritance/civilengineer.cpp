
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    cout << "Default constructor called for CivilEngineer ... " << endl;
}

CivilEngineer::CivilEngineer(string_view fullname, int age, string_view address, int contract_count, string_view speciality): Engineer(fullname, age, address, contract_count), m_speciality(speciality)
{
    cout << "Custom constructor called for CivilEngineer ... " << endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer &source): Engineer(source), m_speciality(source.m_speciality)
{
    cout << "Custom copy constructor called for CivilEngineer ... " << endl;
}

/*
//BAD : Compiler error - m_address is private to person
CivilEngineer::CivilEngineer(string_view fullname,int age,
    string_view address,int contract_count, string_view speciality)
{
    m_full_name = fullname;
    m_age = age;
    //m_address = address;
    m_speciality = speciality;
    cout << "Custom constructor called for CivilEnginner ... " << endl;
}
*/

/*
CivilEngineer::CivilEngineer(string_view fullname,int age,
    string_view address,int contract_count, string_view speciality)
    :m_full_name(fullname),m_age(age),m_address(address),m_speciality(speciality)
{

    cout << "Custom constructor called for CivilEnginner ... " << endl;
}
*/

ostream &operator<<(ostream &out, const CivilEngineer &operand)
{
    out << "CivilEngineer [Full name : " << operand.get_full_name() << ",age : " << operand.get_age() << ",address : " << operand.get_address() << ",contract_count : " << operand.get_contract_count() << ",speciality : " << operand.m_speciality << "]";

    return out;
}

CivilEngineer::~CivilEngineer()
{
}
