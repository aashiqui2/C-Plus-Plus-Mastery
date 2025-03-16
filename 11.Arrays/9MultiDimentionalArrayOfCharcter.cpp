#include <iostream>
using namespace std;
int main()
{

    // const size_t name_length{15};
    // char members[][name_length]{
    //     {'J', 'o', 'h', 'n'}, // No '\0' at the end
    //     {'S','a','m','u','e','l',},                                       // No '\0' at the end
    //     {'R', 'a', 's', 'h', 'i', 'd'},          // No '\0' at the end
    //     {'R', 'o', 'd', 'r', 'i', 'g', 'e', 'z'} // No '\0' at the end
    // };

    //! Declaring a 2D array

    //! Printing out like this is unsafe : may go over and print outside your valid memory block until a terminating null character is encountered.
    // cout << "Unsafe printing of members : " << endl;
    // for (size_t i {0}; i < size(members) ; ++i){
    //     cout << members[i] << endl;
    // }

    //! Can loop around manually printing out each character
    // cout << "Printing out character by character manually : " << endl;
    // for (size_t i{0} ; i < size(members) ; ++i){

    //     for (size_t j{0} ; j < size(members[i]) ; ++j){

    //         cout << members[i][j] ;
    //     }
    //     cout << endl;
    // }

    //! Better : Using C-string litterals
    //!  Compared to initialization with charactes with in '', this is even easier to type. The entire string is a single entity you can manage easily.

    // char members1[][name_length]{
    //     "John",
    //     "Samuel",
    //     "Rashid",
    //     "Rodriguez"};

    // //! Printing out members1
    // cout << "Printing out members1 (C-string literals) : " << endl;
    // for (size_t i{0}; i < size(members1); ++i)
    // {
    //     cout << members1[i] << endl;
    // }

    //! Updating our prediction declaration in the fortune teller game
     char predictions [] [90] {
         "a lot of kinds running in the backyard!",
         "a lot of empty beer bootles on your work table.",
         "you Partying too much with kids wearing weird clothes.",
         "you running away from something really scary",
         "clouds gathering in the sky and an army standing ready for war",
         "dogs running around in a deserted empty city",
         "a lot of cars stuck in a terrible traffic jam",
         "you sitting in the dark typing lots of lines of code on your dirty computer",
         "you yelling at your boss. And oh no! You get fired!",
         "you laughing your lungs out. I've never seen this before." ,
         "Uhm , I don't see anything!"
    };

    cout << endl;
    cout << "Prediction : " << predictions[5] << endl;

    return 0;
}