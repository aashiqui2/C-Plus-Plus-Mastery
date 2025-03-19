#include <iostream>
using namespace std;
class Dog
{
    friend class Cat;

public:
    Dog(const string &name, int age) : m_name{name}, m_age{age}
    {
    }

private:
    string m_name;
    int m_age;
};

class Cat
{
public:
    int a = 0;
    //? without const keyword we can able to modify the cat member's using function
    /* void print_dog_info(const Dog &d)
    {

        cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << endl;
        a++;
    }*/

    //? const after method	Ensures the Cat object itself is not modified by the function.
    void print_dog_info(const Dog &d)
        const
    {
        cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << endl;
    }
};

int main()
{

    Cat cat1;

    Dog dog1("Fluffly", 2);

    cat1.print_dog_info(dog1);

    return 0;
}
