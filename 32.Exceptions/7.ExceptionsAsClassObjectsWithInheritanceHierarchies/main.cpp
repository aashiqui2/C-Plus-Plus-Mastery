#include <iostream>
#include "exceptions.h"


void do_something(size_t i){
      if(i == 2){
          throw CriticalError("i is 2");
      }
      
      if(i == 3){
          throw SmallError("i is 3");
      }
	  
      if(i == 4){
          throw Warning("i is 4");
      }
      cout << "Doing something at iteration : " << i << endl;
}


int main(){

   for(size_t i{0}; i < 5 ; ++i){
        
      try{
          do_something(i);
      }
      catch(CriticalError& ex){
          cout << "CriticalError Exception cought : " << ex.what() << endl;
      }
      catch(SmallError& ex){
          cout << "SmallError Exception cought : " << ex.what() << endl;
      }
      catch(Warning& ex){
          cout << "Warning Exception cought : " << ex.what() << endl;
      }  
      catch(SomethingIsWrong& ex){
          cout << "SomethingIsWrong Exception cought : " << ex.what() << endl;
      }    
    }
   
    return 0;
}