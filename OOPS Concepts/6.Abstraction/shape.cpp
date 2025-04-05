#include <iostream>
using namespace std;
class Shape // abstract class
{
public:
    Shape()
    {
        //can have a constructor
    }
    // When a class has at least one pure virtual function, it becomes an abstract class
    virtual void draw() = 0; // pure virtual function
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle" << endl;
    }
};
int main()
{
    // Shape p;/cannot be  instantiat abstarct class Shape

    return 0;
}