#ifndef DOG_H
#define DOG_H
#include "feline.h"
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(string_view fur_style, string_view description);
     virtual ~Dog();
    
    virtual void bark() const{
        cout << "Dog::bark called : Woof!" << endl;
    }

};

#endif // DOG_H
