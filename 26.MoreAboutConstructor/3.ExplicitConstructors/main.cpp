#include <iostream>
#include "square.h"

//Is square1 > to square2 ? true or false
bool compare( const Square& square1 ,const Square& square2){
    return (square1.surface() > square2.surface()) ? true : false;
}

int main(){

    Square s1(100.0);
    Square s2(20.0);

    cout << boolalpha;
    cout << "s1 > s2 : " << compare(s1,s2) << endl; // true

    //Implicit conversions
    // cout << "s1 > s2 : " << compare(s1,45.9) << endl; // false


   
    return 0;
}