#include <iostream>
#include "dog.h"

int main()
{

    Dog dog1("Fluffy", "Shepherd", 2);

    const string &str_ref = dog1.compile_dog_info();
    cout << " info : " << str_ref << endl;

    unsigned int *int_ptr = dog1.jumps_per_minute();
    cout << "jumps_per_minute : " << *int_ptr << endl;

    cout << "Done!" << endl;
    return 0;
}