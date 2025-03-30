#include <iostream>
#include "cylinder.h"



int main(){
    Cylinder cylinder1(3.3,10.0);
    cout << "Volume of cylinder : " << cylinder1.volume() << endl;
    cout << "Cylinder default color : " << Cylinder::default_color << endl;
    cout << "Cylinder default color : " << cylinder1.default_color << endl;
	
    return 0;
}