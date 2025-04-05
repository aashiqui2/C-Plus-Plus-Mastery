#include <iostream>
#include "derived.h"

int main(){

    //Base ptr : Uses polymorphism
    Base * base_ptr1 = new Derived;
    double result = base_ptr1->add();
    cout <<"Result (base ptr) : " << result  << endl; //12


    cout << "---------------------"<< endl;
	
    //Base ref : Uses Polymorphism
    Derived derived1;
    Base& base_ref1 = derived1;
    result = base_ref1.add();
    cout << "Result (base ref) : " << result << endl; // 12
    
    cout << "---------------------"<< endl;


    //Raw objects
    Base base3;
    result = base3.add();
    cout << "raw result : " << result << endl;

    cout << "---------------------"<< endl;

    //Direct object : Uses static binding
    Derived derived2;
    result = derived2.add();
    cout << "Result (Direct object) : " << result << endl; // 22
	
    cout << "---------------------"<< endl;

	//Raw objects - slicing : uses static binding
	Base base1 = derived2;
	result = base1.add();
    cout << "Result (Raw objects assignment) : " << result << endl; //11

   
    return 0;
}