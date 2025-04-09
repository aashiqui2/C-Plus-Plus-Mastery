#include <iostream>
using namespace std;
class Item{
public : 
        Item(){}
        
        void do_something_in_class() const noexcept{
            cout << "Doing something from class" << endl;
            try{
                throw 1;
            }
            catch(int ex){
                cout << "Handling exception in Item::do_something_in_class" << endl;
                //throw; // Rethrowing in noexcept function/method will terminate program
            }
        }
private : 
        int m_member_var;
};

void some_function() noexcept{
    
    try{
        throw 1;
    }
    catch(int ex){
        cout << "Handling int excpetion in free function some_function()" << endl;
        //throw;
    }  
}

int main(){

    //Exceptions can't be propagated out of a noexcept function by 
    //any means, if you do so the program will terminate, you can 
    //also see that the compiler gives you a warning about that.
    /*
	try{
		some_function();		
	}catch(int ex){
		cout << "Catching rethrown exception in main" << endl;
	}
    */


   //Using noexcept member function
    Item item;
	try{
		item.do_something_in_class();
	}catch(int ex){
		cout << "main() : Catching exception thrown from method" << endl;
	}
   
    return 0;
}