#include <iostream>
using namespace std;

class Point
{
public : 
    double x;
    double y;
};

void print_point(const Point p){
   cout << "Point [ x : " << p.x << ", y : " << p.y << "]" <<endl;
}


int main(){

    Point point1;

    point1.x = 5;
    point1.y = 6;

    print_point(point1);

    auto [a,b] = point1;

   cout << "a : " << a <<endl;
   cout << "b : " << b <<endl;

    point1.x = 44.1;
    point1.y = 55.2;

    print_point(point1);

   cout << "a : " << a <<endl;
   cout << "b : " << b <<endl;

    auto func = [=](){
       cout << "a (captured) : " << a <<endl;
       cout << "b (captured) : " << b <<endl;
    };
    func();

    
    return 0;
}