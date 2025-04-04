#include <iostream>
#include "point.h"

int main(){

    //Print the point count in our program
    //cout << "Point count : " << Point::m_point_count << endl; //0

    Point p1(10.0,20.1);

    cout << "Point count : " << p1.get_point_count() << endl; //1

    Point points[] {Point(1,1),Point(),Point(4)};

    cout << "Point count : " << p1.get_point_count() << endl; //4
   
    return 0;
}