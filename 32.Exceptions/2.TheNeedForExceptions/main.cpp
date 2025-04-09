#include <iostream>
using namespace std;
class Animal
{
public:
    Animal() = default;
    virtual void breathe() const {};

private:
    string m_description;
};

class Dog : public Animal
{
public:
    Dog() = default;
    virtual void breathe() const override {};
    void run()
    {
        cout << "Dog running..." << endl;
    }

private:
    string m_fur_color;
};

/*  Function throws const char* exception when par_b is zero  */
void process_parameters(int par_a, int par_b)
{

    // Do some processing
    if (par_b == 0)
        throw "Potential division by 0 detected";

    int result = par_a / par_b;

    // Some other processing.
}

int main()
{

    //! int division by 0 : CRASH

    /*   const int a{45};
      const int b{0};
      int result = a / b;
      cout << "Done!" << endl; */

    //! Downcast using dynamic_cast with references
    // The hierarchy of Animal->Dog has to be polymorphic to be able to do
    // this. This throws an exception because animal has no dog part so the
    // cast won't really work.

    /*  Animal a;
     Dog &d{dynamic_cast<Dog &>(a)};//bad cast
     cout << "Done!" << endl; */

    //! Exceptions allow us to recover from these errors and give our program a chance to continue running.

    //! Integer division
    /* const int a{45};
    const int b{0};
    int result;
    try
    {
        if (b == 0){
            throw 0;
        }
        result = a / b;
    }
    catch (string ex)
    {
        // Some processing
        cout << "Something went wrong : " << ex << endl;
    }
    catch (int ex)
    {
        cout << "Integer division detected, ex  : " << ex << endl;
    }
    cout << "END." << endl;
    */

    //! Exceptions thrown out of other parts of code written by you or somebody else
    /* try
    {
        process_parameters(10, 0);
    }
    catch (const char *ex)
    {
        cout << "Exception: " << ex << endl;
    }
    cout << "Done!" << endl; */
    return 0;
}