#include <iostream>
using namespace std;
class BANK
{
public:
    virtual void debit_credit() const = 0;
};
class HDFC : public BANK
{
public:
    void debit_credit() const
    {
        cout << "HDFC Banking Debit Credit" << endl;
    }
};
class IB : public BANK
{
public:
    void debit_credit() const
    {
        cout << "IB  Banking Debit Credit" << endl;
    }
};
int main()
{
    BANK *b = new HDFC();
    b->debit_credit();

    return 0;
}