#include <iostream>
using namespace std;
int main()
{

    //!  Memory Leak Issue #1: Overwriting Pointer Without Deleting

    int *p_number{new int{67}}; // Dynamically allocates an int with value 67 (address1)

    // The pointer should be deleted before reassigning it.

    int number{55};     // Stack variable
    p_number = &number; // Now p_number points to a new address (address2)

    // Memory at address1 is now lost because we reassigned p_number
    // This causes a **memory leak** as we have no way to free that memory.

    //! Double allocation without deletion (Memory Leak)
    int *p_number1{new int{55}}; // Allocates memory for an int with value 55

    // Before using p_number1, we should delete it if we plan to reassign it
    p_number1 = new int{44}; // Allocates new memory for an int with value 44

    // The previous memory (holding 55) is now leaked because we lost its reference.

    delete p_number1;    // Deallocate memory correctly
    p_number1 = nullptr; // Reset pointer to avoid dangling pointer issues

    //! Memory Leak in Nested Scope
    {
        int *p_number2{new int{57}}; // Dynamically allocates an int with value 57

        // The pointer goes out of scope here
        // Since delete was **not** called, the memory is leaked.
    }
    // Memory allocated for 57 is leaked because p_number2 was never deleted

    cout << "Program ending well" << endl;
    return 0;
}
