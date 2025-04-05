#ifndef SHAPE_H
#define SHAPE_H
using namespace std;
#include <string>
#include <string_view>
#include <iostream>
class Shape
{
public:
    Shape() = default;
    Shape(string_view description);
    ~Shape();

    //If the class has virtual functions, it includes a pointer to the vtable.
    virtual void draw() const //Virtual Table Pointer (vptr) 
    {
        cout << "Shape::draw() called. Drawing " << m_description << endl;
    }

protected:
    string m_description{""};
};

#endif // SHAPE_H
