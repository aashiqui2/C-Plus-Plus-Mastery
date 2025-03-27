#include <iostream>
using namespace std;
enum Direction : unsigned char
{
    TopLeft = 64,
    TopRight,
    Center,
    BottomLeft,
    BottomRight
};

enum Tool
{
    Pen,
    Marker,
    Eraser,
    Rectangle,
    Circle,
    PaintBucket
};

int main()
{

    Direction direction{Direction::TopLeft};
    Tool tool{Tool::Pen};

    cout << "direction : " << static_cast<unsigned int>(direction) << endl;
    cout << "tool : " << tool << endl;
    //?warning
    std::cout << "(tool > direction) : " << (tool > direction) << endl;

    return 0;
}