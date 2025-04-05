#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    // double cgpa;

    double *cgpa;

    Student(string name,double cgpa)
    {
        this->name=name;
        this->cgpa=new double;
        *(this->cgpa)=cgpa;

    }

    //? shallow copy 
    /* Student(const Student &orgObj)
    {

        this->name=orgObj.name;
        this->cgpa=orgObj.cgpa;
    } */

    //! deep copy
    Student(const Student &orgObj)
    {

        this->name=orgObj.name;
        this->cgpa=new double;
        *(this->cgpa)=*(orgObj.cgpa);
    } 
    //? constructor delegates with deep copy
   /*  Student(const Student &orgObj):Student(orgObj.name,*(orgObj.cgpa))
    {

        
    }  */

    //! Destructor -deallocates dynamic allocated variable
    ~Student()
    {
        cout<<"destructor called "<<this->name<<endl;
        delete cgpa;//memory leak
    }

    void get_info(){
        cout<<"name: "<<name<<endl; 
        cout<<"cgpa: "<<*cgpa<<endl; 
    }
};

#endif