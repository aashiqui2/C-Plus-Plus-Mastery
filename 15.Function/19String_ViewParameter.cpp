#include <iostream>
#include <string_view>
using namespace std;
void say_my_name(string_view name)
{
    // name[0]='w';//not possisble
    name="world";//possible
    cout << "Hello your name is : " << name << endl;
}
void say_my_name(string name)
{
    // name[0]='w';//possible
    name="world";//possible
    cout << "Hello your name is : " << name << endl;
}
void say_my_name(const char *name)
{
    // name[0]='w';//possible
    // name="world";//possible
    cout << "Hello your name is : " << name << endl;
}

int main()
{

    string some_name{"John"};
    // say_my_name(string_view("Samuel"));
    // say_my_name(some_name);
    say_my_name("John");

    return 0;
}