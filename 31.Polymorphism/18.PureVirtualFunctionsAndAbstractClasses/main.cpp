#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main(){
   
   //Shape * shape_ptr = new Shape; // Compiler error//cannot able to create an object for abstrat class

    const Shape * shape_rect = new Rectangle(10,10,"rect1");
    double surface = shape_rect->surface();
    cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << endl;
    cout << "The surface of shape rect is : " << surface << endl;


    cout << "--------------" << endl;

    const Shape * shape_circle = new Circle(10,"circle1");
    surface = shape_circle->surface();
    cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << endl;
    cout << "The surface of the circle is : " << surface << endl;
    return 0;
}