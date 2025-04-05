#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend ostream &operator<<(ostream &, const CivilEngineer &operand);

public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road()
    {
        // m_full_name = "Daniel Gray"; //Compiler error
        // m_age = 45; // Compiler error

        cout << get_full_name() << endl;
        add(10, 2);
        add(10, 2, 4);
        do_something();//can be accesable 
    }

public:
    //!  do_something() originally came from Person class, which was privately inherited in Engineer.
    // using Person::do_something; // Compiler error

private:
    string m_speciality{"None"};
};

#endif // CIVIL_ENGINEER_H
