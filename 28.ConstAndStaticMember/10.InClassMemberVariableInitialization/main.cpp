#include <iostream>
using namespace std;
class Integer
{
public:
    Integer()
    {
        cout << "Default constructor for Integer called" << endl;
    }
    explicit Integer(int value);
    ~Integer();

    int get_value() const
    {
        return inner_int;
    }

    void set_value(int new_val)
    {
        inner_int = new_val;
    }

private:
    int inner_int{};
};
Integer::Integer(int value) : inner_int(value)
{
    cout << "Constructor for Integer " << inner_int << " called" << endl;
}

Integer::~Integer()
{
}

class Point
{
public:
    Point()
    {
    }
    Point(double x, double y) : m_x{x}, m_y{y} {
                                };

private:
    // No initialization at all
    /*
    double m_x;
    double m_y;
    */

    // Explicit assignment

    /* double m_x = 0.1;
    double m_y = 0.1; */

    // Braced initializers
    double m_x{0.1};
    double m_y{0.1};

    //
    Integer i{}; // Default constructo the object
};

int main()
{
    Point p1;
    return 0;
}