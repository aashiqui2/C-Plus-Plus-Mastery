#include <iostream>
#include "person.h"

int main()
{

    Person p1("John", "Snow", 25);
    p1.print_info();

    // string s=p1.get_first_name();
    // creates a copy of the returned string
    // s[0]='w';

    // Create a person copy
    Person p2(p1);
    p2.print_info();

    cout << "-------" << endl;
    
    Person p3("aashiqui");
    p3.print_info();

    p1.set_age(30);
    p1.print_info();
    p2.print_info();

    return 0;
}