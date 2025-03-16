#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // Clears the lowest set bit
        count++;
    }
    return count;
}
int main()
{
    //   int n=256;
    // int n = {15};
    // cout << "The set bit count is : " << __builtin_popcount(n);

    //! Brian Kernighan’s Algorithm (Efficient)
    int num = 29; // Binary: 11101 (4 set bits)
    cout << "Number of set bits: " << countSetBits(num) << endl;

    return 0;
}