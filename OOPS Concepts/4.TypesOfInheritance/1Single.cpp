#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int rollno;
};
int main()
{
    Student s1;
    s1.name="aashiqui";
    s1.age=24;
    s1.rollno=212;

return 0;
}