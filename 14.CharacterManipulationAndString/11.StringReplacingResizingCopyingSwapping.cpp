#include <iostream>
#include <string>
using namespace std;
int main()
{

    //! Replacing (1)
    // basic_string& replace( size_type pos, size_type count,const basic_string& str );
    // Replace the range [pos, pos + count] with str

    // string str1{"Finding Nemo"}; // Replace Finding with 'Searching For'
    // string str1_2{"Searcing For"};
    // cout << "str1 : " << str1 << endl;

    // cout << "Replacing..." << endl;
    // str1.replace(0, 7, str1_2);

    // cout << "str1 : " << str1 << endl;

    //! Replacing - (2)
    // basic_string& replace( size_type pos, size_type count,
    // const basic_string& str,
    // size_type pos2, size_type count2 = npos );

    // Replace in part of str, not its entirety
    // string str2{"Finding Nemo"};
    // string str3{"The Horse was Found in the Fields Searching For Food"};

    // cout << "str2 : " << str2 << endl;

    // cout << "Replacing..." << endl;
    // str2.replace(0, 7, str3, 34, 13);

    // cout << "str2 : " << str2 << endl;

    //! Copying
    // size_type copy( CharT* dest,size_type count,size_type pos = 0)
    // Copy a subsection of *this string to dest. Dest is pre-allocated
    //  The resulting character string is not null-terminated. Be careful

    // string str4{"Climbing Kirimanjaro"};
    // char txt4[15]{}; // Initialized with zero equivalent for characters which is '\0'
    // cout << "std::size(txt4) : " << size(txt4) << endl;
    // cout << "txt4 : " << txt4 << endl;

    // cout << "Copying..." << endl;
    // str4.copy(txt4, 11, 9);

    // // Safe to print because the char array was initialized with '\0' s.
    // cout << "txt4 : " << txt4 << endl;

    //! Resizing
    // resize()

    string str5{"Hello"};

    // cout << "null char : " << '\0' << endl;
    // cout << "str5 : " << str5 << endl;
    // cout << "str5.size() : " << str5.size() << endl;
    // cout << "str5.capacity() : " << str5.capacity() << endl;

    // cout << "Resizing..." << endl;
    // str5.resize(8); // This fills new char place holders with
    //                 // null character by default, you can't print and see them

    // cout << "str5 : " << str5 << endl;
    // cout << "str5.size() : " << str5.size() << endl;
    // cout << "str5.capacity() : " << str5.capacity() << endl;

    //! Prove that they are indeed null characters
    // cout << "Printing through loop : " << endl;
    // for (size_t i{}; i < str5.size(); ++i)
    // {
    //     cout << i << ":" << str5[i] << endl;
    // }

    //! Resize and specify autofill character
    // cout << "Resize and specify autofill character : " << endl;
    // str5.resize(10, '*');
    // cout << "str5 : " << str5 << endl;
    // cout << "str5.size() : " << str5.size() << endl;
    // cout << "str5.capacity() : " << str5.capacity() << endl;

    //! Resize down
    // cout << "Resize down : " << endl;
    // str5.resize(5);
    // cout << "str5 : " << str5 << endl;
    // cout << "str5.size() : " << str5.size() << endl;
    // cout << "str5.capacity() : " << str5.capacity() << endl;

    //! Swapping
    string str_a{"This is a string stored in A"};
    string str_b{"This is a string stored in B and it's really great to be able to do that."};

    // Before swap
    cout << "str_a : " << str_a << endl;
    cout << "str_b : " << str_b << endl;
    cout << "str_a.size() :" << str_a.size() << endl;
    cout << "str_a.capaity() : " << str_a.capacity() << endl;
    cout << "str_b.size() :" << str_b.size() << endl;
    cout << "str_b.capaity() : " << str_b.capacity() << endl;

    cout << "Swapping..." << endl;
    str_a.swap(str_b);

    // After swap
    cout << "str_a : " << str_a << endl;
    cout << "str_b : " << str_b << endl;
    cout << "str_a.size() :" << str_a.size() << endl;
    cout << "str_a.capaity() : " << str_a.capacity() << endl;
    cout << "str_b.size() :" << str_b.size() << endl;
    cout << "str_b.capaity() : " << str_b.capacity() << endl;

    return 0;
}