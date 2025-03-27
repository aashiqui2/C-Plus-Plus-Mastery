#include <iostream>
using namespace std;
size_t dog_count{0}; // Global scope

unsigned int add_student()
{
    // The scope of this var is in add_student, but it's life time goes beyond the function execution.
    static unsigned int student_count{0};
    student_count++;
    ++dog_count;
    return student_count;
}

void do_something()
{
    //--student_count; // Compiler error
    ++dog_count;
}

int main()
{

    /*   cout << "student count : " << add_student() << endl; // 1
      cout << "student count : " << add_student() << endl; // 2
      cout << "student count : " << add_student() << endl; // 3 */

    for (size_t i{}; i < 20; ++i)
    {
        cout << "student count : " << add_student() << endl;
    }

    cout<<dog_count;

    return 0;
}