#include "oval.h"

Oval::Oval(double x_radius, double y_radius, string_view description) : Shape(description), m_x_radius(x_radius), m_y_radius(y_radius)
{
}
Oval::Oval(const Oval &oavl)
{
    cout<<"copy constrtctor from oval"<<endl;
}
Oval::~Oval()
{
}
