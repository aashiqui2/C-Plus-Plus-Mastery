#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    Shape *shape_ptr = new Circle(10, "Circle1");
    shape_ptr->draw();
    shape_ptr->draw(45);
    // shape_ptr->draw(45,"Red");

    return 0;
}