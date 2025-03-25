#include <iostream>
#include <string>
using namespace std;
int main()
{

    // string str1{"Hello World"};
    // string str2;
    // string str3{};

    //! Empty
    // cout << endl;
    // cout << "std::string::empty() : " << endl;
    // cout << "str1 is empty : " << boolalpha << str1.empty() << endl;
    // cout << "str2 is empty : " << boolalpha << str2.empty() << endl;
    // cout << "str3 is empty : " << boolalpha << str3.empty() << endl;

    //! Size
    // cout << endl;
    // cout << "std::string::size() : " << endl;
    // cout << "str1 contains " << str1.size() << " characters" << endl; // 11
    // cout << "str2 contains " << str2.size() << " characters" << endl; // 0
    // cout << "str3 contains " << str3.size() << " characters" << endl; // 0

    //! Length
    // cout << endl;
    // cout << "std::string::length() : " << endl;
    // cout << "str1 contains " << str1.length() << " characters" << endl; // 11
    // cout << "str2 contains " << str2.length() << " characters" << endl; // 0
    // cout << "str3 contains " << str3.length() << " characters" << endl; // 0

    // max_size : max number of characters a string can have on the system

    // Prints : 2147483647 on my system
    // Prints : 4611686018427387903 on my system
    // string str1{"Hello World"};
    // cout << "std::string can hold " << str1.max_size() << " characters" << endl;

    //! Capacity
    // capacity() values depend on the compiler and implementation.
    // string str1{"Hello World"};
    // string str2;
    // cout << "str1 capacity : " << str1.capacity() << endl;
    // cout << "str2 capacity : " << str2.capacity() << endl;

    // str1 = "The sky is so blue, the grass is green. Kids are running all over the place";

    // cout << "str1 size : " << str1.size() << endl;
    // cout << "str1 capacity : " << str1.capacity() << endl;

    //! Reserve : Update the capacity
    // string str1{"Hello World"};
    // cout << "str1 capacity : " << str1.capacity() << endl; // 15
    // cout << "str1 size : " << str1.size() << endl;

    // str1.reserve(100);

    // cout << "str1 after reserve : " << str1 << endl;
    // cout << "str1 capacity : " << str1.capacity() << endl; // 100
    // cout << "str1 size : " << str1.size() << endl;

    //! shrink_to_fit
    string str1{"Hello World"}; // 11
    str1.reserve(100);

    cout << "str1 capacity : " << str1.capacity() << endl; // 100
    cout << "str1 size : " << str1.size() << endl;         // 11

    str1.shrink_to_fit();

    cout << "str1 capacity : " << str1.capacity() << endl; // 11
    cout << "str1 size : " << str1.size() << endl;         // 11

    return 0;
}