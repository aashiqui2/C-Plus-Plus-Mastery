#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
using namespace std;
template <typename T>
void show_collection(const T &collection)
{

    cout << " [";
    for (const auto &elt : collection)
    {
        cout << " " << elt;
    }
    cout << "]" << endl;
}

template <typename T>
void show_map_collection(const T &collection)
{

    cout << " [";
    for (const auto &[key, value] : collection)
    {
        cout << " (" << key << "," << value << ")";
    }
    cout << "]" << endl;
}

int main()
{

    // set<int> collection1 {11,16,2,912,15,6,15,2};
    unordered_set<int> collection1{11, 16, 2, 912, 15, 6, 15, 2};

    // map<int,int> collection2 {{1,11},{0,12},{4,13},{2,14},{3,15}};
    unordered_map<int, int> collection2{{1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}};

    cout << "collection1 : ";
    show_collection(collection1);

    cout << "collection2 : ";
    show_map_collection(collection2);

    // The operations are mostly similar to set and map . The details
    // can be checked in your favorite C++ standard library reference manual

    return 0;
}