#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    //? constructor ->non parameterized
    Teacher()
    {
        dept = "Computer Science";
        cout << "I am a Constructor" << endl;
    }

    //? constructor -> parameterized
    /* Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    } */

    //? this pointer ->
    Teacher(string name, string dept, string subject, double salary)
    {
        // this->name = name;
        //? same as
        (*this).name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //! Copy constructor
    Teacher(const Teacher &orgObj);

    //! properties or attributes
    string name;
    string dept;
    string subject;

    //! Methods or member function
    void changeDept(string newDept);
    void setSalary(double salary);
    double getSalary();
    void get_info();
};
#endif