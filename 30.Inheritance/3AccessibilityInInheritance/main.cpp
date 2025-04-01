#include <iostream>
using namespace std;
class base
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class publicDerived : public base
{
    // x is public
    // y is protected
    // z is private
};
class protectedDerived:protected base{
    // x is protected
    // y is protected
    // z is not accessible from protectedDerived
};

class privateDerived:private base{
    // x is private
    // y is private
    // z is not accessible from privateDerived
};
int main()
{

    return 0;
}