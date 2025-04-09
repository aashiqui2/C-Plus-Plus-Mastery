#include <iostream>
using namespace std;
class Counter
{
public:
    static int count; // Declaration of static variable

    Counter()
    {
        count++;
    }

    static void show()
    {
        cout << "Count = " << count << endl;
    }
};

// Definition outside the class
int Counter::count = 0;

int main()
{
    Counter c;
    Counter::show();

    return 0;
}