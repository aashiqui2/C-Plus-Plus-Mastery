#ifndef DOG_H
#define DOG_H
#include <iostream>
using namespace std;

class Dog
{
public:
    Dog() = default;
    Dog(string_view name_param, string_view breed_param, unsigned int age_param);

    // Getter
    string_view get_name();
    string_view get_breed();
    unsigned int get_age();

    // Setter
    void set_name(string_view name_param);
    void set_breed(string_view breed_param);
    void set_age(unsigned int age_param);

    void print_info();
private:
string_view m_name;
string_view m_breed;
unsigned int m_age;
};

#endif // DOG_H