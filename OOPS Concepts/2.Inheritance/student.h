#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person
{
public:
    // name,age,rollno
    int rollno;

    Student()
    {
        cout << "student Constructor" << endl;
    }
    Student(string name, int age, int rollno)
     : Person(name,age)
    {
        this->rollno = rollno;
    }
    ~Student()
    {
        cout << "student destructor" << endl;
    }

    void get_info()
    {
        cout << "Name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "rollno :" << rollno << endl;
    }
};
#endif