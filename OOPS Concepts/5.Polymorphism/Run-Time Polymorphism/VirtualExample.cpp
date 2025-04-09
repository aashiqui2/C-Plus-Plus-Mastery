#include <iostream>
using namespace std;
class Vaccine
{
public:
    virtual void putVaccine()
    {
        cout << "Covid Vaccine" << endl;
    }
};
class Covaxin : public Vaccine
{
public:
    void putVaccine()
    {
        cout << "Covid Covaxin Vaccine" << endl;
    }
};
class Covishield : public Vaccine
{
public:
    void putVaccine()
    {
        cout << "Covid  Covishield Vaccine" << endl;
    }
};
int main()
{
    Covishield cs;
    Covaxin cx;
    //  Base class Pointyer Derived class Object
    Vaccine *v = NULL;

    v = &cx;
    v->putVaccine();
    v = &cs;
    v->putVaccine();

    return 0;
}