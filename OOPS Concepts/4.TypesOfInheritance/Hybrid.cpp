#include <iostream>
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
class GradStudent : public Student
{
public:
    string researchArea;
};
class Teacher : public Person
{
public:
    string subject;
    double salary;
};

class TeachingAssistant : public Student, public Teacher
{
public:
    string ProficientSubject;
};
int main()
{

    return 0;
}