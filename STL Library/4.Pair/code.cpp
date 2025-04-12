#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{

    //! Code1 : Create pair
    cout << "creating pairs:" << endl;
    pair<int,string> pair1{0, "Book shelf"};

    auto pair2 = make_pair(1, "Table"); // Deduces the template arguments

    // cout << "pair1 : " << pair1 <<endl;

    cout << " pair1 : (" << pair1.first << "," << pair1.second << ")" << endl;
    cout << " pair2 : (" << pair2.first << "," << pair2.second << ")" << endl;

    //! Code2 : auto[] syntax - collect components of a pair into variables.
    cout << endl;
    cout << "auto[] syntax - collect components of a pair into variables : " << endl;
    auto [int_var, string_var] = pair1;
    cout << "pair1 (auto[] syntax) : (" << int_var << "," << string_var << ")" << endl;

    //! Code3 : template argument deduction (C++17)
    cout << endl;
    cout << "template argument deduction : " << endl;

    pair student(33165, string("John Snow")); // Deducing the template arguments

    cout << "student ID : " << student.first << endl;
    cout << "Student name : " << student.second << endl;

    //! Code4 : collection of pairs
    cout << endl;
    cout << "collection of pairs : " << endl;

    vector<pair<int,string>> collection{{10, "Earth"}, {20, "Spins"}, {30, "From"}, {40, "Left"}, {50, "To"}, {60, "Right"}};

    //? Traverse : syntax1
    cout << endl;
    cout << "syntax1 : " << endl;
    cout << "collection : [";
    for (const auto &elt : collection)
    {
        cout << " (" << elt.first << "," << elt.second << ")";
    }
    cout << "]" << endl;

    //? Traverse : syntax2
    cout << endl;
    cout << "syntax2 : " << endl;
    cout << "collection : [";
    for (auto [key, value] : collection)
    {
        cout << " (" << key << "," << value << ")";
    }
    cout << "]" << endl;

    //! emplace use
    auto it=collection.begin()+2;
    collection.insert(it, make_pair(25, "Goes")); // must create a pair first

    collection.emplace(it, 25, "Goes");// creates the pair directly inside vector
    cout << endl;
    cout << "syntax2 : " << endl;
    cout << "collection : [";
    for (auto [key, value] : collection)
    {
        cout << " (" << key << "," << value << ")";
    }
    cout << "]" << endl;
   


    return 0;
}