#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    // Comparing object sizes
    cout << "sizeof(Shape) : " << sizeof(Shape) << endl;   // dynamic : 40
    cout << "sizeof(Oval) : " << sizeof(Oval) << endl;     // dynamic : 56
    cout << "sizeof(Circle) : " << sizeof(Circle) << endl; // dynamic : 56

    // Slicing
    Circle circle1(3.3, "Circle1");
    //? As a result, shape.draw() calls Shape::draw(), not Circle::draw(), even if draw() is virtual.
    Shape shape = circle1; // Object slicing occurs here
    shape.draw();          // Shape::draw

    return 0;
}