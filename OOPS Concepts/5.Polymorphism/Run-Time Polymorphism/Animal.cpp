#include <iostream>
using namespace std;

class Animal
{
public: // runtime polymorphism
    virtual void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    //   Dog d;
    //   d.speak();

    //   Animal a;
    //   a.speak();

    //! object slicing
    /* When you assign a derived object (Dog) to a base class object (Animal a = d;), only the base part is copied — the derived part is "sliced off." You're left with just an Animal object, not a Dog. So a.speak() calls Animal::speak(), even if it’s virtual — because at that point, a is not a Dog anymore. */
    
    Dog d;
    Animal a = d;
    a.speak();

    //! Without Virtual :
    // The compiler binds the function at compile-time, so no matter what the actual object is, it’ll always call the base class’s version (if you're using a base pointer).

    //! With virtual :
    // he ability for a base class pointer or reference to call the correct function based on the actual object type at runtime.

    //! with reference
    Dog d;
    Animal &a = d;
    a.speak(); // Now calls Dog::speak() ✔️

    //! with Pointer
    // Animal *a = new Dog();
    // a->speak(); // Also calls Dog::speak() ✔️
}
