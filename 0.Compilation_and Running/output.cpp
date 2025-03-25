
#include <iostream>
#include "sum.h"
using namespace std;

extern "C"
 void printSumInt(int a, int b)
{
  cout << a << " + " << b << ": " << Int_Sum(a, b) << endl;
}

extern "C" 
void printSumFloat(float a, float b)
{
  cout << a << " + " << b << ": " << Float_Sum(a, b) << endl;
}
