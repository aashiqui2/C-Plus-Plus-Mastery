#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend ostream &operator<<(ostream &, const CivilEngineer &operand);

public:
    CivilEngineer();
    CivilEngineer(string_view fullname, int age, string_view address, int contract_count, string_view speciality);
    CivilEngineer(const CivilEngineer &source);
    ~CivilEngineer();

    void build_road()
    {
        get_full_name();
        m_full_name = "Daniel Gray";
        m_age = 45;

        add(10, 2);
        add(10, 2, 4);
    }

public:
    using Person::do_something;

private:
    string m_speciality{"None"};
};

#endif // CIVIL_ENGINEER_H
