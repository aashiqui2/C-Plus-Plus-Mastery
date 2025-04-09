#include <iostream>
#include <memory>
#include "stream_insertable.h"
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

class Point : public StreamInsertable{
public : 
    Point() = default;
    Point(double x , double y)
        : m_x(x), m_y(y)
    {
    }

    virtual void stream_insert(ostream& out)const override{
        out << "Point [x: " << m_x << ",y: " << m_y << "]";
    }

private : 
    double m_x;
    double m_y;
};


int main(){

    Point p1(10,20);
    cout << "p1 : " << p1 << endl;
    //operator<<(cout,p1);

    cout << "------------" << endl;

    unique_ptr<Animal> animal0 = make_unique<Dog>("stripes","dog1");
    cout << *animal0 << endl;

    unique_ptr<Animal> animal1 = make_unique<Bird>("white","bird1");
    cout << *animal1 << endl;


    cout << "--------------" << endl;
    //Can even put animals in an array and print them polymorphically.
   shared_ptr<Animal> animals[] {
        make_shared<Dog>("stripes","dog2"),
        make_shared<Cat>("black stripes","cat2"),
        make_shared<Crow>("black wings","crow2"),
        make_shared<Pigeon>("white wings","pigeon2")
    };
	cout << endl;
    cout << "Printing out animals array : " << endl;
    for(const auto& a : animals){
        cout << *a << endl;
    }
    
    return 0;
}