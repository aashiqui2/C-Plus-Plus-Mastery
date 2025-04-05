#include "teacher.h"
#include "student.h"
int main()
{
    /* Teacher t1; // automatically calls constructor if available or default constructor called
    t1.name = "aashiqui";
    t1.dept = "Computer science";
    t1.subject = "C++";
    // t1.salary = 25000;//salary is private

    cout << t1.name << endl;

    Teacher t2;
    cout << t2.dept << endl; */

   /*  Teacher t3("aashiqui", "Computer Science", "C++", 25000);
    t3.get_info();
    cout << endl;
    Teacher t4(t3); // calls default copy constructor -invokes
    t4.get_info();

    int x=5;//stored in stack */

    // shallow copy and deep copy
    Student s1("rahul kuamr",8.9);
    Student s2(s1);
    s1.get_info();
    s2.get_info();

    cout<<endl;
    s2.name="aashiqui";
    *(s2.cgpa)=9.9;
    s1.get_info();
    s2.get_info();



    return 0;
}