#include <iostream>
#include <memory>
#include "ellipse.h"

int main(){

    //Accessing stuff through the base class pointer
	shared_ptr<Shape> shape0 = make_shared<Ellipse>(1,5,"ellipse0");
    shape0->draw(); // Polymorphism
	// shape0->func(); // Error :  func is private in Shape

    cout << "------------" << endl;

    //Direct objects : static binding
	Ellipse ellipse1 (1,6,"ellipse1");
	ellipse1.func(); // Works
	//ellipse1.draw(); //Error : draw() is private in Ellipse.- Static binding


     cout << "------------" << endl;   

	//Raw derived object assigned to raw base object
    //Slicing will occur, Shape::draw will be called
    Shape shape3 = Ellipse(2,3,"ellipse3");
    shape3.draw(); // Shape::draw() called
	//shape3.func(); // Error : func is private in shape
   
    return 0;
}