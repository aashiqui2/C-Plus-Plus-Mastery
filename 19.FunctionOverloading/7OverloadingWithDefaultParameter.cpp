#include <iostream>
using namespace std;
//Declarations
void print_age(int age = 33);

void print_age(int age);

int main(){


    print_age();
    print_age(20);
    
    
    return 0;
}

//Definitions
void print_age(int age ){
    cout << "Your age is( int version)  : " << age << endl;
}

void print_age(long int age){
    cout << "Your age is (long int version) : " << age << endl;
}
