#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
};
class Teacher
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
    TeachingAssistant t1;
    t1.name = "aashiqui";
    t1.subject = "Digital Network";

    cout << t1.name << endl;
    cout << t1.subject << endl;

    return 0;
}