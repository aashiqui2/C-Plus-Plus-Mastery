#include <iostream>
#include "cylinder.h"
#include "bird.h"

int main(){

    int age{};

 

	Cylinder cylinder1(3.3,10.0);
    cout << "Volume of cylinder : " << cylinder1.volume() << endl;
    cout << "Cylinder default color : " << Cylinder::default_color << endl;
    cout << "Cylinder default color : " << cylinder1.default_color << endl;
	
	cout << endl;
	cout << "Other constants" << endl;
	cout << "Int constant : " << Cylinder::INT_CONSTANT << endl;
	cout << "Color(enum) constant : " << Cylinder::COLOR_CONSTANT << endl;
	cout << "Char ptr constant : " << Cylinder::CHAR_PTR_CONSTANT << endl;
	cout << "arr[2] : " << Cylinder::INT_ARRAY_CONSTANT[2] << endl;
	cout << "float constant : " << Cylinder::FLOAT_CONSTANT << endl;
	cout << "str_arr[1] : " << Cylinder::STRING_ARRAY_CONSTANT[1] << endl;
	
	
	cout << endl;
	cout << "Can't modify those static constants" << endl;
	//Cylinder::INT_CONSTANT = 6; // Compiler error.
	
	cout << endl;
	cout << "raw constants" << endl;
	cout << "WEIRD_FLOAT : " << cylinder1.WEIRD_FLOAT << endl;
	cout << "WEIRD_C_STRING : " << cylinder1.WEIRD_C_STRING << endl;
	cout << "WEIRD_INT_ARRAY[3] : " << cylinder1.WEIRD_INT_ARRAY_CONSTANT[3] << endl;


    cout << endl;
	cout << "Constant initialized with other constant" << endl;
	cout << "BIRD_WEIGHT_CONSTANT : " << Bird::BIRD_WEIGHT_CONSTANT << endl;
  
	
	
   
    return 0;
}