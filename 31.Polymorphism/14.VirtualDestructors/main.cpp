#include <iostream>
#include "dog.h"

int main()
{

    Animal *p_animal = new Dog;
    //! A virtual destructor ensures that the correct (most derived) destructor is called when deleting an object via a base class pointer.

    delete p_animal;

    return 0;
}