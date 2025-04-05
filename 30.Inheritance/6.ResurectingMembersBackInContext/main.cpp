#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    CivilEngineer ce;

    ce.build_road();
    ce.do_something();
    ce.build_something();

    cout << ce << endl;

    Engineer e;
    cout << e << endl;

    Person p;
    cout << p << endl;

    return 0;
}