#include <iostream>
#include <string_view>
#include <cstring>
using namespace std;
int main()
{

    //! Showing the problem
    //! performs deep copies
    // string string1{"Hello"};
    // string string2{string1}; // Copy with own address
    // string string3{string1}; // Copy with own address

    // cout << "address of string1 : " << &string1 << endl;
    // cout << "address of string2 : " << &string2 << endl;
    // cout << "address of string3 : " << &string3 << endl;

    //! Using string_view
    /* std::string_view is lightweight
    It does not store the actual string but only references it.
    It typically consists of:
    A pointer to the start of the string.
    A size (length of the view).
    That’s why sizeof(string_view) is only 16 bytes (on most architectures). */

    // string_view sv{"Hellooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"};
    // string_view sv1{sv};  // View viewing the hello literal
    // string_view sv2{sv1}; // Another view viewing hello

    // cout << "Size of string_view : " << sizeof(string_view) << endl;
    // cout << "size of sv1 : " << sizeof(sv1) << endl;

    // cout << "sv : " << sv << endl;
    // cout << "sv1 : " << sv1 << endl;
    // cout << "sv2 : " << sv2 << endl;

    //! Constructing string_view's

    // string string3{"Regularstring"};
    // const char *c_string{"Regular C-String"};
    // const char char_array[]{"Char array"};  // Null terminated
    // char char_array2[]{'H', 'u', 'g', 'e'}; // Non null terminated char array

    // string_view sv3{"String litteral"};
    // string_view sv4{string3};
    // string_view sv5{c_string};
    // string_view sv6{char_array};
    // string_view sv7{sv3};
    // string_view sv8{char_array2, std::size(char_array2)}; // Non null terminated char array
    //                                                       // Need to pass in size info
    // cout << "sv3 : " << sv3 << endl;
    // cout << "sv4 : " << sv4 << endl;
    // cout << "sv5 : " << sv5 << endl;
    // cout << "sv6 : " << sv6 << endl;
    // cout << "sv7 (constructed from other string_view) : " << sv7 << endl;
    // cout << "Non null terminated string withstring_view : " << sv8 << endl;

    //! Changes to the original string are reflected in the string_view

    // char word[]{"Dog"};
    // string_view sv9{word};

    // cout << "word : " << sv9 << endl;

    // cout << "Changing data... " << endl;
    // // Change the data
    // word[2] = 't';

    // cout << "word : " << sv9 << endl;

    //! Changing the view window : SHRINKING

    // const char *c_string1{"The animals have left the region"};
    // string_view sv10{c_string1};

    // cout << "sv10 : " << sv10 << endl;

    // sv10.remove_prefix(4); // Removes "The"

    // // Prints : animals have left the region
    // cout << "View with removed prefix(4) : " << sv10 << endl;

    // sv10.remove_suffix(10); // Removes "the region"

    // // Prints : animals have left
    // cout << "View with removed suffix(10) : " << sv10 << endl;

    // // Changing the view doesn't change the viewed string :
    // cout << "Original sv10 viewed string : " << c_string1 << endl;

    //! String_view shouldn't outlive whatever it is viewing
    // string_view sv11;

    // {
    //     string string4{"Hello there"};
    //     sv11 = string4;
    //     cout << "INSIDE --- sv11 is viewing : " << sv11 << endl;

    //     // string4 goes out of scope here.
    // }
    // cout << "OUTSIDE --- sv11 is viewing : " << sv11 << endl; // Undefined Behavior!

    //! data
    string_view sv13{"Ticket"};
    cout << "sv13 : " << sv13 << endl;
    cout << "std::strlen(sv13.data()) : " << strlen(sv13.data()) << endl;

    //! Don't use data() on a modified view (through remove_prefix or remove_suffix)
    string_view sv14{"Ticket"};
    sv14.remove_prefix(2);
    sv14.remove_suffix(2);

    // Length info is lost when you modify the view
    cout << sv14 << " has " << strlen(sv14.data()) << " characters(s)" << endl;
    cout << "sv14.data() is " << sv14.data() << endl;
    cout << "sv14 is " << sv14 << endl;

    //! Don't view non null terminated strings

    char char_array3[]{'H', 'e', 'l', 'l', 'o'};
    string_view sv15{char_array3, std::size(char_array3)};

    cout << sv15 << " has " << strlen(sv15.data()) << " characters(s)" << endl;
    cout << "sv15.data is  : " << sv15.data() << endl;
    cout << "sv15 is : " << sv15 << endl;

    //! string behaviors
    string_view sv16{"There is a huge forest in that area"};

    cout << "sv16 is " << sv16.length() << " characters long" << endl;
    cout << "The front character is : " << sv16.front() << endl;
    cout << "The back character is : " << sv16.back() << endl;
    cout << "Substring : " << sv16.substr(0, 22) << endl;

    return 0;
}