#include "square.h"
#include <iostream>

Square::Square(double side_param ): Square{side_param,"black",6}
{
    m_position = 45.8;
    cout << "One param constructor called" << endl;
}

Square::Square( double side_param, const string& color_param, int shading_param )
    : m_side{side_param},m_color{color_param},m_shading{shading_param}
{
    cout <<  "Three param constructor called" << endl;
}

double Square::surface() const {
    return m_side*m_side;
}

Square::~Square()
{
    cout << "Square object destroyed"  << endl;
}

