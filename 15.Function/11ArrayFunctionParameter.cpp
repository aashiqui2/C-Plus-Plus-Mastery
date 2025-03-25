#include <iostream>
#include <array>
using namespace std;
// double sum( double scores[], size_t count){
double sum (double* scores , size_t count){

    double score_sum{};

//    cout << "sizeof(scores)  : " << sizeof(scores) << endl;
//    cout << "sizeof(int*) : " << sizeof (int *) << endl;
//    size_t arr_size = size(scores);

   for(size_t i{0} ; i < count ; ++i){
       score_sum += scores[i];
   }
    return score_sum;
}



int main(){
    double my_scores[]{10.5,34.3,4.8,6.5};
    //cout << "sizeof(my_scores) : " << sizeof(my_scores) << endl;
   

   double result = sum(my_scores,size(my_scores));
   cout << "result : " << result << endl;
 
    return 0;
}