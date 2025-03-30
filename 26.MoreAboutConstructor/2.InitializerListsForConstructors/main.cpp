#include <iostream>
#include "cylinder.h"
using namespace std;

int main()
{
    Cylinder c1(5);
    cout << "base_rad : " << c1.get_base_radius() << endl;
    cout << "height : " << c1.get_height() << endl;
    cout << "volume : " << c1.volume() << endl;
    return 0;
}