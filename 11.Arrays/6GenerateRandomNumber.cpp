#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

    srand(time(0)); // Seed for random number every time 
    //? comment this line and check the differences

    // int random_num = rand();
    // cout << "random_num : " << random_num << endl; // 0 ~ RAND_MAX
    // random_num = rand();
    // cout << "random_num : " << random_num << endl; // 0 ~ RAND_MAX
    // random_num = rand();
    // cout << "random_num : " << random_num << endl; // 0 ~ RAND_MAX

    //! Generate random numbers in a loop
    // int random_num;
    // for(size_t i {0} ; i < 20 ; ++i){
    //     random_num = rand();
    //     cout << "random_num " << i << ":" <<  random_num << endl; // 0 ~ RAND_MAX
    // }

    //! Generate a range between 0 and 10
    // int random_num =  rand() % 11;                  // [ 0 ~10]
    // for(size_t i {0} ; i < 20 ; ++i){
    //     random_num = rand() % 11;
    //     cout << "random_num " << i << "  :   " <<  random_num << endl; // 0 ~ RAND_MAX
    // }

    // int random_num = rand() % 10 + 1 ; // [1~10]
    // for(size_t i {0} ; i < 20 ; ++i){
    //     random_num = rand() % 10 + 1;
    //     cout << "random_num " << i << "  :   " <<  random_num << endl; // 0 ~ RAND_MAX
    // }

    return 0;
}