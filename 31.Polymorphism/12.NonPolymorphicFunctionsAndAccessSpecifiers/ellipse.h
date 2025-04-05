#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape
{
public:
    Ellipse();
    Ellipse(double x_radius, double y_radius,string_view description);
    ~Ellipse();
private: 
     void draw( )const {
        cout << "Ellipse::draw() called for : " << m_description << endl;
    }
public: 
     void func() const  {
        cout << "Ellipse::func() called for : " << m_description << endl;
    }
private : 
    double m_x_radius;
    double m_y_radius;
};

#endif // ELLIPSE_H
