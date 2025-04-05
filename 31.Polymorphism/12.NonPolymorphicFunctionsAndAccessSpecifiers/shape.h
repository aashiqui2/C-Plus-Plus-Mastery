#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    Shape();
    Shape(string_view description);
    ~Shape();
public:
     void draw( )const{
        cout << "Shape::draw() called for : " << m_description << endl;
    }
private : 
     void func() const {
        cout << "Shape::func() called for : " << m_description << endl;
    }
protected:
    string m_description;
};

#endif // SHAPE_H
