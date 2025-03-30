#ifndef SQUARE_H
#define SQUARE_H
using namespace std;
#include <string>

class Square
{
public:
    explicit Square(double side_param);
    Square(double side_param, const string &color_param, int shading_param);
    ~Square();
    double surface() const;

private:
    double m_side;
    string m_color;
    int m_shading;
    double m_position;
};

#endif // SQUARE_H
