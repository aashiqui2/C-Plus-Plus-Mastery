#include <iostream>
using namespace std;
class Dog
{
    friend void debug_dog_info(const Dog &d);
    friend void debug_dog_info();

public:
    // Constructor using pass by reference (no copy) &name
    Dog(const string &name, int age) : m_name{name}, m_age{age}
    {
    }

private:
    string m_name;
    int m_age;
};
void debug_dog_info(const Dog &d)
{
    cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << endl;
}
void debug_dog_info()
{
    Dog dog1("fluffy", 3);
    dog1.m_name = "Fluffy";
    cout << "Dog [ name : " << dog1.m_name << ", age : " << dog1.m_age << "]" << endl;
}
int main()
{
    Dog dog1("Millou", 4);
    debug_dog_info(dog1);
    return 0;
}