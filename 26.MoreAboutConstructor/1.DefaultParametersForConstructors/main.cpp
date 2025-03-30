#include <iostream>
#include "cylinder.h"
using namespace std;

int main()
{

    Cylinder c1(4);
    cout << "volume : " << c1.volume() << endl;

    return 0;
}