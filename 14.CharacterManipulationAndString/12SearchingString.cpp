#include <iostream>
#include <string>
using namespace std;
int main()
{

    //! Find(1)
    // string::find()
    //  size_type find( const basic_string& str, size_type pos = 0 ) const
    //  Finds the starting index where the str substring is found in
    //  the string where we call the method.

    // string string1{"Water was poured in the heater"};
    // string search_for{"ter"};

    // size_t found_pos = string1.find(search_for);
    // cout << "find('ter') : index [" << found_pos << "]" << endl; // index : 2

    //? find red
    // search_for = "red";
    // found_pos = string1.find(search_for);
    // cout << "find('red') : index [" << found_pos << "]" << endl; // 13

    //? Find something that isn't there
    // search_for = "chicken";
    // found_pos = string1.find(search_for);
    // cout << "find('chicken') : index [" << found_pos << "]" << endl; // huge number

    //? string::npos
    // cout << "npos : " << string::npos << endl;

    // size_t large = -1;
    // cout << "large : " << large << endl;

    //! Using string::npos to check if search was successfull or failed

    // string string1{"Water was poured in the heater"};
    // string search_for{"red"};

    // size_t found_pos = string1.find(search_for);
    // if (found_pos == string::npos)
    // {
    //     cout << "Could not find the string 'red' : " << endl;
    // }
    // else
    // {
    //     cout << "'red' found starting at position : " << found_pos << endl;
    // }

    //! Search for chicken and check result againststring::npos
    // search_for = "chicken";
    // found_pos = string1.find(search_for);

    // if (found_pos == string::npos)
    // {
    //     cout << "Could not find the string 'chicken'. " << endl;
    // }
    // else
    // {
    //     cout << "'chicken' found starting at position : " << found_pos << endl;
    // }

    //! Find(2)
    // Can specify the position where we want the search to start
    // using the second parameter of the method

    // string string1{"Water was poured in the heater"};
    // string search_for{"ter"};

    // size_t found_pos = string1.find(search_for);
    // cout << "ter found at position : " << found_pos << endl;

    // found_pos = string1.find(search_for, 0);
    // cout << "ter found at position : " << found_pos << endl;

    // found_pos = string1.find(search_for, 10);
    // cout << "ter found at position : " << found_pos << endl;

    //! Find(3)
    // size_type find( const CharT* s, size_type pos = 0 ) const;
    // Finds the first substring equal to the character string pointed to by s
    // pos : the position where we start searching in thestring

    string string2 = "beer is packaged by her in beer cans around here.";
    const char *c_string2{"her"};

    size_t found_pos = string2.find(c_string2, 2);
    if (found_pos != string::npos)
    {
        cout << c_string2 << " found at position : " << found_pos << endl;
    }
    else
    {
        cout << "Could not find the string :  " << (c_string2) << endl;
    }

    return 0;
}