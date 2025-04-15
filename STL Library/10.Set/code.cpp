#include <iostream>
#include <functional>
#include <set>
#include <algorithm>
using namespace std;

class Book
{
    friend ostream &operator<<(ostream &out, const Book &operand);

public:
    Book(int year, string title) : m_year(year), m_title(title)
    {
    }
    bool operator<(const Book &right_operand) const
    {
        return this->m_year < right_operand.m_year;
    }

private:
    int m_year;
    string m_title;
};
ostream &operator<<(ostream &out, const Book &operand)
{
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    cout << " Collection [";
    while (it != collection.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;
}

//! Comparator functor
class IntComparator
{
public:
    bool operator()(int left, int right) const
    {
        return (left < right);
    }
};

//! Comparator function pointer
bool compare_ints(int left, int right)
{
    return (left < right);
}

int main()
{

    //! Code1 : Building sets (internally tree)
    set<int> numbers{11, 16, 2, 912, 15, 6, 15, 2}; // Data is ordered internally, no duplicates.
    cout << endl;
    cout << "building sets (Need < operator for ordering) : " << endl;
    print_collection(numbers);

    //! Set of custom types : Need to implement operator<
    set<Book> books{Book(2000, "Cooking Food"), Book(1930, "Building Computers"), Book(1995, "Farming for Beginners")};

    print_collection(books);
    cout << "---------------------" << endl;

    //! Code2 : Iterators : forward and back, and constant

    cout << endl;
    cout << "iterators : " << endl;

    auto it = numbers.begin();
    cout << " set of numbers : [";
    while (it != numbers.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;

    auto it_back = numbers.rbegin();
    cout << " set of numbers (reverse) : [";
    while (it_back != numbers.rend())
    {
        cout << " " << *it_back;
        ++it_back;
    }
    cout << "]" << endl;

    auto it_back_books = books.rbegin();
    cout << " set of books (reverse) : [";
    while (it_back_books != books.rend())
    {
        cout << " " << *it_back_books;
        ++it_back_books;
    }
    cout << "]" << endl;

    //! Code3 : Capacity :
    cout << "---------------------" << endl;

    cout << endl;
    cout << "capacity : " << endl;
    cout << " numbers : ";
    print_collection(numbers);
    cout << " set max_size : " << numbers.max_size() << endl;
    cout << " set is empty : " << numbers.empty() << endl;
    cout << " set size : " << numbers.size() << endl;

    cout << "---------------------" << endl;
    // Modifiers

    //! Clear
    cout << endl;
    cout << "clear :" << endl;
    print_collection(numbers);

    numbers.clear();

    print_collection(numbers);
    cout << boolalpha;
    cout << "numbers is empty : " << numbers.empty() << endl;

    // Insert  : returns an pair object containing result about the insert operation.
    cout << endl;
    cout << "Insert : " << endl;
    numbers = {11, 12, 13, 14, 15};
    print_collection(numbers);

    // Insert 14 : won't insert because set doesn't allow duplicates.
    // Will just do nothing and won't give an error though.
    numbers.insert(14);

    cout << " After insert 14 : ";
    print_collection(numbers);

    // Can capture the insert result through a returned pair object.

    cout << "-------" << endl;

    // auto result = numbers.insert(14);
    auto result = numbers.insert(20);

    cout << " first : " << *result.first << endl;
    cout << " second : " << result.second << endl;

    cout << "------" << endl;
    if (result.second)
    {
        cout << " Insertion of " << *result.first << " successful" << endl;
    }
    else
    {
        cout << " Couldn't insert " << *result.first << " in the set. It's a duplicate!" << endl;
    }
    print_collection(numbers);

    // Emplace
    cout << endl;
    cout << "emplace : " << endl;

    print_collection(numbers);

    // auto result_emplace = numbers.emplace(421); // Succeeds
    auto result_emplace = numbers.emplace(13); // Fails

    if (result_emplace.second)
    {
        cout << " Emplace of " << *result_emplace.first << " successful" << endl;
    }
    else
    {
        cout << " Emplace of " << *result_emplace.first << " FAILED" << endl;
    }

    print_collection(numbers);

    // Erase
    cout << endl;
    cout << "erase : " << endl;

    print_collection(numbers);

    auto it_erase = find(numbers.begin(), numbers.end(), 13);

    if (it_erase != numbers.end())
    {
        cout << "Found 13 !" << endl;
    }
    else
    {
        cout << "Couldn't find 13 !" << endl;
    }

    // Erase the 13
    if (it_erase != numbers.end())
        numbers.erase(it_erase);

    print_collection(numbers);

    // swap
    cout << endl;
    cout << "swap : " << endl;

    set<int> other_numbers{200, 400, 600};

    cout << " numbers : ";
    print_collection(numbers);
    cout << " other_numbers :";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    cout << " numbers : ";
    print_collection(numbers);
    cout << " other_numbers :";
    print_collection(other_numbers);

    // Change comparator
    cout << endl;
    cout << "change comparator : " << endl;

    // set<int> numbers1 {11,16,2,9,12,15,6,15,2};  // Use default functor (less)
    // set<int,less<int>> numbers1 {11,16,2,9,12,15,6,15,2};  // Built in functor
    // set<int,greater<int>> numbers1 {11,16,2,9,12,15,6,15,2}; // Built in functor
    // set<int,IntComparator> numbers1 {11,16,2,9,12,15,6,15,2}; // Use Custom functor

    // Function pointer
    /*
    set<int,bool(*)(int,int)> numbers1(compare_ints) ;
    numbers1.insert({11,16,2,9,12,15,6,15,2});
    */

    set<int, function<bool(int, int)>> numbers1([](int left, int right)
                                                { return left > right; });
    numbers1.insert({11, 16, 2, 9, 12, 15, 6, 15, 2}); // Lambda function

    cout << " numbers1 :[ ";
    for (const auto &elt : numbers1)
    {
        cout << " " << elt;
    }
    cout << "]" << endl;

    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);

 
    cout<<"Lower bound = "<<*(s1.lower_bound(4))<<endl; // should not be less than key
    cout<<"Lower bound = "<<*(s1.lower_bound(20))<<endl; //if not found->s1.end()
    
    cout<<"upper bound = "<<*(s1.upper_bound(4))<<endl; //greater than key

    for(auto val:s1)
    {
        cout<<val<<" ";
    }

    return 0;
}