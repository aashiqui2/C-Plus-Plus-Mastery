#ifndef DOG_H
#define DOG_H
#include "feline.h"
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(string_view fur_style, string_view description);
    virtual ~Dog();

    virtual void bark() const
    {
        cout << "Dog::bark called : Woof!" << endl;
    }

    // The run method in subclasses of dog can't be overrided
    // further, derived classes are forced to use the implmenetation in Dog
    void run() const override final
    {
        cout << "Dog::run called" << endl;
    }
};

#endif // DOG_H
