#include "teacher.h"

void Teacher::changeDept(string newDept)
{
    dept = newDept;
}
void Teacher::setSalary(double s)
{
    salary = s;
}
double Teacher::getSalary()
{
    return salary;
}
void Teacher::get_info()
{
    cout << "name :" << name << endl;
    cout << "subject :" << subject << endl;
}
//! Copy constructor(shallow copy)
/* Teacher::Teacher(const Teacher &orgObj)
{
    this->name=orgObj.name;
    this->dept=orgObj.dept;
    this->subject=orgObj.dept;
    this->salary=orgObj.salary;
} */

//! same as we can use constructor delegates
Teacher::Teacher(const Teacher &orgObj) : Teacher(orgObj.name, orgObj.dept, orgObj.subject, orgObj.salary)
{
}
