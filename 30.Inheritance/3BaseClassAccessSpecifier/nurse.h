#ifndef NURSE_H
#define NURSE_H

#include "person.h"

// Nurse will do protected inheritance
class Nurse : protected Person
{
    friend ostream &operator<<(ostream &, const Nurse &operand);

public:
    Nurse();
    ~Nurse();

    void treat_unwell_person()
    {
        m_fullname = "John Snow"; // OK
        m_age = 23;               // OK
        // m_address = "897-78-723"; Compiler error
    }

private:
    int practice_certificate_id{0};
};

#endif // NURSE_H
