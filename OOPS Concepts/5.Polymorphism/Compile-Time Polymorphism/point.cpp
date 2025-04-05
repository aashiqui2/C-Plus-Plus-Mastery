#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    friend ostream& operator<<(ostream &out, const Point &p);

public:
    Point() = default;
    Point(double x, double y) : m_x{x}, m_y{y} {}
    ~Point() = default;

    //! Member
    /* Point operator+(const Point &right_operand)
    {
        return Point(this->m_x + right_operand.m_x,
                     this->m_y + right_operand.m_y);
    } */
    //(or)
    //! Operator Overloading
    Point operator+(const Point &right_operand);

    void print_info()
    {
        cout << "Point [ x : " << m_x << ", y : " << m_y << "]" << endl;
    }

private:
    double length() const;

public:
    double m_x{};
    double m_y{};
};
double Point::length() const
{
    return sqrt(pow(m_x - 0, 2) + pow(m_y - 0, 2) * 1.0);
}
//! Operator Overloading
Point Point::operator+(const Point &right_operand)
{
    return Point(this->m_x + right_operand.m_x, this->m_y + right_operand.m_y);
}

ostream& operator<<(ostream& out, const Point &p)
{
    out << p.m_x<< " and " << p.m_y << endl;
    return out;
}

int main()
{
    Point p1(10, 10);
    Point p2(20, 20);
    Point p3 = {p1 + p2}; // p1.operator+(p2)
    Point p4{p2 + Point(5, 5)};
    p3.print_info();
    p4.print_info();

    (Point(20, 20) + Point(10, 10)).print_info();

    cout << p1;
    return 0;
}