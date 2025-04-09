#include <iostream>
using namespace std;
class Bike
{
public:
    virtual void start()
    {
        cout << "Bike start" << endl;
    }
};
class Apache : public Bike
{
public:
    void start()
    {
        cout << "Apache start" << endl;
    }
};
class KTM : public Bike
{
public:
    void start()
    {
        cout << "KTM start" << endl;
    }
};

int main()
{
    Bike *b = new Apache();
    b->start();

    return 0;
}