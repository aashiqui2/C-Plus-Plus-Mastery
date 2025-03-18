#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str1{"Hello there"};

    // Size of a string : doesn't count the null terminator
    cout << "str1.size() : " << str1.size() << endl;

    // Reading characters in string : array index operator
    // Regular indexed loop. Can also be adapted to use while and do-while
    // This is left as an exercise.
    cout << endl;
    cout << "For loop with array index notation : " << endl;

    cout << "str1(for loop) : ";
    for (size_t i{}; i < str1.size(); ++i)
    {
        cout << " " << str1[i];
    }
    cout << endl;

    //! Can also use range based for loop

    string str1{"Hello there"};
    cout << endl;
    cout << "Using range based for loop : " << endl;

    cout << "str1(range based for loop) : ";
    for (char value : str1)
    {
        cout << " " << value;
    }
    cout << endl;

    //! at() syntax to target characters

    cout << endl;
    cout << "Using the string::at() method : " << endl;

    string str1{"Hello there"};
    cout << "str1 : (for loop with at()) : ";

    for (size_t i{}; i < str1.size(); ++i)
    {
        cout << " " << str1.at(i);
    }
    cout << endl;

    //! Modifying with operator[] and at()
    string str1{"Hello there"};
    str1[0] = 'B';
    str1.at(1) = 'a';
    cout << "str1(modified) : " << str1 << endl;

    //! Getting the front and back characters

    string str2{"The Phoenix King"};
    char &front_char = str2.front();
    char &back_char = str2.back();
    cout << "The front char in str2 is : " << front_char << endl;
    cout << "The back char in str2 is : " << back_char << endl;

    front_char = 'r';
    back_char = 'd';

    cout << "str2 : " << str2 << endl;

    //! c_str method
    // doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
    // returns const char * to the wrapped string. You shouldn't use
    // it to modify data in the string.

    string str2{"The Phoenix King"};
    const char *wrapped_c_string = str2.c_str();
    cout << "Wrapped c string : " << wrapped_c_string << endl;
    // wrapped_c_string[0] = 'e'; // Compiler error

    // data()
    string str2{"Hello World"};

    char *data = str2.data();//Since C++17, this is writable 
    cout << "Wrapped c string : " << data << endl;

    data[0] = 'B'; // This also changes string.

    cout << "Wrapped c string (after modification) : " << data << endl;
    cout << "Original string (after modification ) :" << str2 << endl;

    return 0;
}