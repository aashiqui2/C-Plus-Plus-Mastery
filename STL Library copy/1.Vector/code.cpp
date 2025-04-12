#include <iostream>
#include <vector>
using namespace std;

//! Template Utility Function to Print Vector (Generic for any type)
template <typename T>
void print_vec(const vector<T> &vec)
{
    for (size_t i{}; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

//! Print vector of strings using non-const iterator (modifiable version)
void print_vec_iterator(vector<string> &v)
{
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//! Print vector of strings using const_iterator (read-only version)
void print_vec_iterator(const vector<string> &v)
{
    vector<string>::const_iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//! Print vector of strings in reverse using reverse_iterator
void print_rev_iterator(vector<string> &v)
{
    vector<string>::reverse_iterator it;
    for (it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//! we can also use the auto keyword
void print_rev_iterator(vector<string> &v)
{
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    //!------------------ Basic Push Back and Capacity Growth ------------------

    // vector<int> vec;
    // vec.push_back(1); // Adds 1 to the vector
    // vec.push_back(2); // Might trigger internal reallocation
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // cout << "Size: " << vec.size() << endl;       // Number of actual elements
    // cout << "Capacity: " << vec.capacity() << endl; // Current allocated capacity

    // vec.emplace_back(6); // Adds 6 at the end (more efficient than push_back)
    // vec.pop_back();      // Removes last element (6)

    // print_vec(vec);

    //!------------------ Element Access ------------------

    // cout << vec.at(0) << endl;    // Bounds-checked access (safe)
    // cout << vec[0] << endl;       // Direct access (no bounds check)

    // cout << "Front element: " << vec.front() << endl;
    // cout << "Back element : " << vec.back() << endl;

    //!------------------ Direct Initialization ------------------

    // vector<int> vec1{11, 22, 33, 44, 55}; // Initializes directly with values
    // print_vec(vec1);

    //!------------------ Fill Constructor ------------------

    // vector<int> vec2(3, 10); // Creates vector of size 3, all values = 10
    // print_vec(vec2);

    //!------------------ Copy Constructor ------------------

    // vector<int> vec3{20, 55};
    // vector<int> vec4(vec3); // Copies all elements of vec3 into vec4
    // print_vec(vec4);

    //!------------------ Erasing Elements ------------------

    // vector<int> v = {1, 2, 3, 4, 5};

    // v.erase(v.begin());              // Removes first element (1)
    // print_vec(v);

    // v.erase(v.begin() + 2);          // Removes element at index 2 (which is 4)
    // print_vec(v);

    // v.erase(v.begin() + 1, v.begin() + 3); // Removes elements at index 1 and 2
    // print_vec(v);

    // Note: erase() changes size, but not capacity

    //!------------------ Inserting Elements ------------------

    // v.insert(v.begin() + 1, 100); // Inserts 100 at index 1
    // print_vec(v);

    //!------------------ Clearing and Checking State ------------------

    // v.clear(); // Clears all elements, but does not shrink capacity
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;

    // if (v.empty()) {
    //     cout << "Vector is empty" << endl;
    // }

    //!------------------ Iterator Access ------------------

    // cout << "vec.begin(): " << *(v.begin()) << endl;

    // Warning: end() returns iterator one-past-the-end → do NOT dereference!
    // cout << "vec.end(): " << *(v.end()) << endl; // Undefined behavior

    //!------------------ Iterator Example ------------------

    vector<string> vec_str = {"The", "sky", "is", "blue", "my", "friend"};
    print_vec_iterator(vec_str); // Prints using non-const iterator

    return 0;
}
