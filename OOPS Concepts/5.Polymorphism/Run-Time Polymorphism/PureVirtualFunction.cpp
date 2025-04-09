#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() const = 0; // Pure virtual
};

class Circle : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing Circle\n";
    }
};

int main()
{
    // Shape s; ❌ Error: Cannot instantiate abstract class

    Circle c;
    Shape *shapePtr = &c;
    shapePtr->draw(); // ✅ Outputs: Drawing Circle
}
// abstart class is a class when we have atleat one virtual function 
