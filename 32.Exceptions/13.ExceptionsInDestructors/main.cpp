#include <iostream>
using namespace std;
class Item
{
public:
    Item() {}
    ~Item()
    {
        try
        {
            throw 0;
        }
        catch (int ex)
        {
            throw;
        }
    }
};

int main()
{
    try
    {
        Item item;
    }
    catch (int ex)
    {
        cout << "main() : Catching int exception" << endl;
    }

    cout << "END." << endl;
    return 0;
}