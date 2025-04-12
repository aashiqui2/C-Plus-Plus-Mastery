#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // part of utility library

    pair<int, int> p = {1, 5};
    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, string> p1 = {1, "aashiqui"};
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<int, pair<int, string>> p2 = {1, {1, "aashiqui"}};
    cout << p2.first << endl;
    cout << p2.second.second << endl;

    vector<pair<int, string>> collection = {{10, "Earth"},
                                            {20, "Spins"},
                                            {30, "From"},
                                            {40, "Left"},
                                            {50, "To"},
                                            {60, "Right"}};

    //! push_back a pair
    collection.push_back({70, "moon"});

    // emplace_back ->in-place object create automatically and fast then push_back
    collection.emplace_back(80,"sun");

    cout << "collection : [";
    for (auto elt : collection)
    {
        cout << " (" << elt.first << "," << elt.second << ")";
    }
    cout << "]" << endl;

    return 0;
}