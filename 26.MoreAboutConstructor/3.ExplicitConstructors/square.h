#ifndef SQUARE_H
#define SQUARE_H

using namespace std;
#include <string>

class Square
{
public:
explicit Square(double side_param, const string &color_param = "black");
    ~Square();

    double surface() const;

private:
    double m_side;
    string m_color;
};

#endif // SQUARE_H
