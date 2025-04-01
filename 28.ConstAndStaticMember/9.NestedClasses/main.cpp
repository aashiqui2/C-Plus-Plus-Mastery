#include <iostream>
using namespace std;
class Outer
{
public:
    Outer();
    Outer(int int_param, double double_param);
    ~Outer();

    void do_something()
    {
        Inner inner1(10.0);
        cout << "Created inner object with value : " <<inner1.get_double() <<  endl;
        //inner1.inner_var; // Outer doesn't have access to private parts of Inner Has to go through setters and getters
        inner1.do_something_with_outer(this);
    }

private:
    int m_var1;
    double m_var2;
    inline static int static_int{45};

    class Inner // ❌ Private by default
    {
    public:
        Inner(double double_param);

        double get_double() const
        {
            // Accessing private parts of Outer
            // cout << "Inner accessing m_var1 : " << m_var1 << endl;// Compiler error.
            cout << "static_int : " << static_int << endl;
            return inner_var;
        }

        void do_something_with_outer(Outer *outer)
        {
            cout << "This is inner accessing private parts of outer object, m_var1 : " << outer->m_var1 << endl;
        }

    private:
        double inner_var;
    };
};
// default constructor . Delegates to two param constructor
Outer::Outer() : Outer(0, 0.0)
{
}
Outer::Outer(int int_param, double double_param) : m_var1(int_param), m_var2(double_param)
{
}

Outer::~Outer()
{
}

Outer::Inner::Inner(double double_param) : inner_var(double_param)
{
}
int main()
{
    Outer outer1(10, 20.1);
    outer1.do_something();
    return 0;
}