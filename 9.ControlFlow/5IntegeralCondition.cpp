#include <iostream>

using namespace std;
int main(){

    int condition {-5};

    bool bool_condition = condition;
    cout << boolalpha;


    if(bool_condition){
        cout << "We have a " << bool_condition << " in our variable " << endl; // different from 0
    }else
    {
        cout << "We have " << bool_condition << " in our variable" << endl; // zero
    }
    
    
    return 0;
}