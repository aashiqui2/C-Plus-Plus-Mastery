#include "circle.h"

Circle::Circle(double radius, string_view description) : Oval(radius, radius, description)
{
}
Circle::Circle(const Circle &circle)
{
    cout<<"copy constructor from cirlce"<<endl;
}
Circle::~Circle()
{
}
