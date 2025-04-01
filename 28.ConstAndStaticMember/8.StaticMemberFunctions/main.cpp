#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point();
    Point(double x, double y);
    Point(double xy_coord);
    Point(const Point &point);
    ~Point();

    double length() const;

    static size_t get_point_count()
    {
        return m_point_count;
    }
    static void print_info(const Point &p)
    {
        cout << "Point : [ m_x : " << p.m_x << ", m_y : " << p.m_y << "]"
                  << endl;
    }

private:
    double m_x;
    double m_y;
    inline static size_t m_point_count{};
};

Point::Point() : Point(0.0, 0.0)
{
    cout << "Point default constructor called" << endl;
}
Point::Point(double x, double y)
    : m_x(x), m_y(y)
{
    cout << "Constructing Point [ m_x : " << m_x << ", m_y : " << m_y << "]" << endl;
    ++m_point_count;
}

Point::Point(double xy_coord) : Point(xy_coord, xy_coord)
{
    cout << "Point single param constructor called" << endl;
}

Point::Point(const Point &point) : Point(point.m_x, point.m_x)
{
    // Copy constructor
    cout << "Copy constructor called" << endl;
    ++m_point_count; // Creating a copy object. So we increment
}

Point::~Point()
{
    // Destructor
    cout << "Destroying point object. ";
    // We destroy a point object , so we decrement
    --m_point_count;

    cout << " Current point count : " << m_point_count << endl;
}

double Point::length() const
{
    // Function to calculate distance from the point(0,0)
    return sqrt(pow(m_x - 0.0, 2) + pow(m_y - 0.0, 2));
}

int main()
{
    cout << "Point count : " << Point::get_point_count() << endl;

    Point p1{6, 7};

    cout << "Point count : " << p1.get_point_count() << endl;
    p1.print_info(p1);
    return 0;
}