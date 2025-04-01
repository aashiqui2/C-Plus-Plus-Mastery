#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point();
    Point(double xy_coord);
    Point(double x, double y);
    Point(const Point &point);
    ~Point();

    double length() const;

    size_t get_point_count() const
    {
        return m_point_count;
    }
    void initialize_pointer(double x, double y)
    {
        p_m_point4 = new Point(x, y);
    }

    void print_info() const
    {
        cout << "Point  [ m_x : " << m_x << ", m_y : " << m_y << "]" << endl;
    }

public:
    // Point m_point1; // Incomplete type compiler error
    // const Point m_point2; //Incomplete type compiler error
    // static inline const Point m_point3{}; // Incomplete type compiler error
    Point *p_m_point4;

    static const Point m_point4;
    static Point m_point5;

private:
    double m_x;
    double m_y;
    inline static size_t m_point_count{};
};

const Point Point::m_point4{4, 5};
Point Point::m_point5{3, 8};

Point::Point() : Point(0.0, 0.0)
{
}
Point::Point(double x, double y) : m_x{x}, m_y{y}, p_m_point4{nullptr}
{
    cout << "Point constructor called" << endl;
    ++m_point_count;
}
Point::Point(double xy_coord) : Point(xy_coord, xy_coord)
{
}
Point::Point(const Point &point) : Point{point.m_x, point.m_y}
{
}
Point::~Point()
{
    --m_point_count;
}
double Point::length() const
{
    return sqrt(pow(m_x - 0, 2) + pow(m_y - 0, 2) * 1.0);
}
int main()
{
    Point p1(5, 5);
    p1.initialize_pointer(10, 10);
    p1.m_point4.print_info();

    return 0;
}