#include <iostream>
using namespace std;
class ABC
{
public:
    ABC()
    {
        cout << "constructor" << endl;
    }
    ~ABC()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    if (true)
    {
        //ABC obj; // when the constructor goes out of the scope then destructor called
        static ABC obj;
    }

    cout << "end of the program" << endl;

    return 0;
}