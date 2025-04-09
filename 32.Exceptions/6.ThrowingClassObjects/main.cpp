#include <iostream>
using namespace std;

class SomethingIsWrong
{
public:
    SomethingIsWrong(const string &s)
        : m_message(s)
    {
    }

    // Copy Constructor
    SomethingIsWrong(const SomethingIsWrong &source)
    {
        cout << "Copy constructor for SomethingIsWrong called" << endl;
        m_message = source.m_message;
    }

    // Destructor
    ~SomethingIsWrong()
    {
        cout << "SomethingIsWrong destructor called" << endl;
    }
    const string &what() const
    {
        return m_message;
    }

private:
    string m_message;
};

void do_something(size_t i)
{
    if (i == 2)
    {
        throw SomethingIsWrong("i is 2"); // ← Copy constructor is called here!
    }
    cout << "Doing something at iteration : " << i << endl;
}

int main()
{

    for (size_t i{0}; i < 5; ++i)
    {

        try
        {
            do_something(i);
        }
        catch (SomethingIsWrong &ex)
        {
            cout << "Exception cought : " << ex.what() << endl;
        }
    }

    return 0;
}