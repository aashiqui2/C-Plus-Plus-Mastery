#include "point.h"

Point::Point(double x_param, double y_param) 
	: x(new double(x_param)),
		y(new double(y_param))
{
   cout << "Point constructed  : " << this <<endl;

}

//Copy constructor
Point::Point(const Point& source_point)
	: x(new double(*(source_point.get_x()))),
		y(new double(*(source_point.get_y())))
{
	std::cout << "Body of copy constructor" <<endl;
}

//Move constructor
Point::Point( Point&& source_point)
	: x(source_point.steal_x()),
		y(source_point.steal_y())
{
    //source_point.invalidate();
	std::cout << "Body of move constructor" <<endl;
}


Point::~Point()
{
	delete x;
	delete y;
}

