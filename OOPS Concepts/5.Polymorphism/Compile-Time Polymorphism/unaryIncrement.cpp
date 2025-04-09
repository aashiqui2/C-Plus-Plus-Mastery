#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point &operator++()
    {
        ++x;
        ++y;
        return *this;
    }
    Point operator++(int)
    {
        Point temp = *this; // Save current state
        ++(*this);          // Use pre-increment to update current object
        return temp;        // Return the old value
    }

    void display() const
    {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 2);
    ++p;
    p.display();

    (++p).display();
    (p++).display();
    return 0;
}
