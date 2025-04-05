#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>
#include <string_view>
class Person
{
    friend ostream &operator<<(ostream &, const Person &person);

public:
    Person();
    Person(string_view fullname, int age, const string address);
    ~Person();

    // Getters
    string get_full_name() const
    {
        return m_full_name;
    }

    string get_address() const
    {
        return m_address;
    }
    int get_age() const
    {
        return m_age;
    }

    int add(int a, int b) const
    {
        return a + b;
    }

    int add(int a, int b, int c) const
    {
        return a + b + c;
    }

    void do_something() const;

public:
    string m_full_name{"None"};

protected:
    int m_age{0};

private:
    string m_address{"None"};
};

#endif // PERSON_H
