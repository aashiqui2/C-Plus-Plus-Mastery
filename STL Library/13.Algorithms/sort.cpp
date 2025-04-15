#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
class Book
{
    friend ostream &operator<<(ostream &out, const Book &operand);

public:
    Book(int year, string title)
        : m_year(year), m_title(title)
    {
    }

    bool operator<(const Book &right_operand) const
    {
        return this->m_year < right_operand.m_year;
    }

    bool operator>(const Book &right_operand) const
    {
        return this->m_year > right_operand.m_year;
    }

    bool operator==(const Book &right_operand) const
    {
        return (this->m_year == right_operand.m_year);
    }

public:
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

    cout << " Collection [";
    for (const auto &elt : collection)
    {
        cout << " " << elt;
    }
    cout << "]" << endl;
}

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{

    // Directly without predicate
    vector<int> collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    cout << "collection(unsorted) : ";
    print_collection(collection);

    sort(begin(collection), end(collection));

    cout << "collection(sorted) : ";
    print_collection(collection);

    cout << "---------------------------" << endl;

    // With custom compare function
    collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    cout << "collection(unsorted) : ";
    print_collection(collection);

    // sort(begin(collection),end(collection),less<int>());
    // sort(begin(collection),end(collection),greater<int>());
    sort(begin(collection), end(collection), [](int x, int y)
         { return x < y; });

    cout << "collection(sorted) : ";
    print_collection(collection);

    cout << "--------------------------" << endl;

    // Sorting collections of custom items
    vector<Book> books{Book(1734, "Cooking Food"),
                       Book(2000, "Building Computers"),
                       Book(1995, "Farming for Beginners")};

    cout << "books(before sort) : " << endl;
    print_collection(books);

    //! operator overloaded need in class
    // sort(begin(books),end(books));
    // sort(begin(books),end(books),less<Book>());
    // sort(begin(books),end(books),greater<Book>());
    //  Will look for > operator.
    //  Put it in and make the compiler happy

    auto cmp = [](const Book &book1, const Book &book2)
    {
        return (book1.m_year < book2.m_year);
    };

    sort(begin(books), end(books), cmp);

    cout << "books(after sort) : " << endl;
    print_collection(books);

    //! vector of pair
    vector<pair<int, int>> v = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(begin(v), end(v));

    for (auto p : v)
    {
        cout << p.first << " " << p.second;
        cout << endl;
    }
    cout << "custom comparator " << endl;
    sort(begin(v), end(v), comparator);
    for (auto p : v)
    {
        cout << p.first << " " << p.second;
        cout << endl;
    }

    //! reverse()
    vector<int> v1 = {1, 2, 3, 4, 5};
    // reverse(begin(v1),end(v1));
    reverse(begin(v1) + 1, begin(v1) + 3);
    print_collection(v1);

    string s="abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}