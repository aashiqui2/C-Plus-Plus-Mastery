#include <iostream>
using namespace std;
int main()
{

    // int * data = new int[10000000000000000];//array of size 10^16

    /*  for (size_t i{0}; i < 10000000; ++i)
     {
         int *data = new int[100000000];
         // delete[] data;
     } */

    //! exception
    /* for (size_t i{0}; i < 100; ++i)
    {
        try
        {
            int *data = new int[1000000000];
        }
        catch (exception &ex)
        {
            cout << "  Something went wrong : " << ex.what() << endl;
        }
    } */

    //! nothrow
    for (size_t i{0}; i < 100; ++i)
    {

        int *data = new (nothrow) int[1000000000];
        /* Without nothrow, new would throw a bad_alloc exception if memory allocation fails.
          With nothrow, new returns nullptr instead of throwing an exception if memory allocation fails.
        */

        if (data != nullptr)
        {
            cout << "Data allocated" << endl;
        }
        else
        {
            cout << "Data allocation failed" << endl;
        }
    }

    cout << "Program ending well" << endl;

    return 0;
}