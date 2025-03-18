#include <iostream>
using namespace std;

int main() {
    // Declare and initialize two integer arrays
    int arr0[5]{1, 2, 3, 4, 5};
    int arr1[5]{6, 7, 8, 9, 10};

    // Declare pointer variables and assign them to the arrays
    int *p_arr0{arr0}; // Points to the first element of arr0
    int *p_arr1{arr1}; // Points to the first element of arr1

    // Print original arr0
    cout << "Original arr0: ";
    for (size_t i = 0; i < size(arr0); ++i) {
        cout << arr0[i] << " ";
    }
    cout << endl;

    // Print original arr1
    cout << "Original arr1: ";
    for (size_t i = 0; i < size(arr1); ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Swapping pointers (Note: This does NOT swap array contents, only pointer references)
    int *temp{nullptr};
    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    // Print swapped data using pointers (No change in actual arrays)
    cout << "\nAfter pointer swap (does not affect actual arrays):" << endl;
    cout << "p_arr0 points to arr1 data: ";
    for (size_t i = 0; i < size(arr0); ++i) {
        cout << p_arr0[i] << " ";
    }
    cout << endl;

    cout << "p_arr1 points to arr0 data: ";
    for (size_t i = 0; i < size(arr1); ++i) {
        cout << p_arr1[i] << " ";
    }
    cout << endl;

    // Swapping actual data (correct way to swap array contents)
    int tempArr[5];
    for (size_t i = 0; i < size(arr1); ++i) {
        tempArr[i] = arr1[i];  // Copy arr1 to tempArr
    }
    for (size_t i = 0; i < size(arr0); ++i) {
        arr1[i] = arr0[i];  // Copy arr0 to arr1
    }
    for (size_t i = 0; i < size(tempArr); ++i) {
        arr0[i] = tempArr[i]; // Copy tempArr to arr0
    }

    // Print actual swapped arrays
    cout << "\nAfter actual array swap:" << endl;
    cout << "arr0: ";
    for (size_t i = 0; i < size(arr0); ++i) {
        cout << arr0[i] << " ";
    }
    cout << endl;

    cout << "arr1: ";
    for (size_t i = 0; i < size(arr1); ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
