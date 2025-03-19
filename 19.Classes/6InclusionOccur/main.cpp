#include "Person.h"
#include "Student.h"

int main()
{
    Student s;
    s.display();
    s.show();
    return 0;
}


/* 
⚠️! Compilation Error (Multiple Inclusion Issue)
error: redefinition of 'class Person'
The compiler includes Person.h twice:
     Once in main.cpp
     Once indirectly through Student.h
This results in duplicate class definitions, causing an error
*/