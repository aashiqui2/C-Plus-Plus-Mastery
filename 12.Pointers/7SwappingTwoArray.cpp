#include <iostream>
using namespace std;
int main()
{

    int arr0[5]{1, 2, 3, 4, 5};
    int arr1[5]{6, 7, 8, 9, 10};
    int *p_arr1{arr1};
    int *p_arr0{arr0};

    // Print arr0
    //  cout << "arr0 : ";
    //  for (size_t i{}; i < size(arr0); ++i) {
    //      cout << p_arr0[i] << " ";
    //  }
    //  cout << endl;

    // Print arr1
    // cout << "arr1 : ";
    // for (size_t i{}; i < size(arr1); ++i) {
    //     cout << p_arr1[i] << " ";
    // }
    // cout << endl;

    //! Swapping data the hard way

    // int temp[5];

    // Move data from arr1 into temp
    //  for (size_t i{ 0 }; i < size(arr1); ++i) {
    //      temp[i] = arr1[i];
    //  }

    // Move data from arr0 to arr1
    //  for (size_t i{ 0 }; i < size(arr0); ++i) {
    //      arr1[i] = arr0[i];
    //  }

    // Move data temp to arr0
    //  for (size_t i{}; i < size(temp); ++i) {
    //      arr0[i] = temp[i];
    //  }

    //! error
    /* int *temp{nullptr};
    temp = arr1;
    arr1 = arr0; */

    int *temp{nullptr};

    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    // Print arr0
    cout << "arr0 : ";
    for (size_t i{}; i < size(arr0); ++i)
    {
        cout << p_arr0[i] << " ";
    }
    cout << endl;

    // Print arr1
    cout << "arr1 : ";
    for (size_t i{}; i < size(arr1); ++i)
    {
        cout << p_arr1[i] << " ";
    }
    cout << endl;

    return 0;
}