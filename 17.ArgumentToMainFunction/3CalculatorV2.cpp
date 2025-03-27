#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(int argc , char** argv){

    //Check the number of parameters
    if(argc != 4){
        cerr << "Program can only be called with 3 arguments like: " << endl;
        cerr << "rooster a + b" << endl;
        cerr << "You called with : " ;
            for ( int i {0} ; i < argc ; ++i){
				cout <<" " <<  argv[i]  ;
			}
			cout << endl;
        return 0;
    }

    //Grab the operands
    double first_number {atof(argv[1])};
    double second_number {atof(argv[3])};
    
    if((first_number == 0.0) || (second_number == 0.0)){
        cout << "Please use valid numbers ( different from zero) for first and second parameters)" << endl;
        return 0;
    }

    //Grab the operation
    const char *operation { argv[2]};
    char c;
    
    if( (strlen(operation) == 1) &&
            ((operation[0] == '+') ||
            (operation[0] == '-') ||
            (operation[0] == 'x') || // x is for multiplication. * is interpreted
									 // by the shell and disturbing things.
            (operation[0] == '/'))) {
                
                c = operation[0];
            }else{
                cerr << operation << " is not a valid operation." << endl;
                return 0;
    }

    //Do the operation
    switch(c){
        case '+':
        cout << first_number << "+" << second_number << "=" 
                << first_number + second_number << endl;
        break;
        
        case '-':
        cout << first_number << "-" << second_number << "=" 
                << first_number - second_number << endl;
        break;
        
        case 'x':
        cout << first_number << "*" << second_number << "=" 
                << first_number * second_number << endl;
        break;
        
        case '/':
        cout << first_number << "/" << second_number << "=" 
                << first_number / second_number << endl;
        break;
    }
    
    return 0;
}