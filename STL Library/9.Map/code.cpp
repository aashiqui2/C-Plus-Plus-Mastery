#include <iostream>
#include <functional>
#include <map>
using namespace std;

class IntComparator
{
public:
    bool operator()(int left, int right) const
    {
        return (left < right);
    }
};

bool compare_ints(int left, int right)
{
    return (left < right);
}

class Book
{
    friend ostream &operator<<(ostream &out, const Book &operand);

public:
    Book() = default;
    Book(int year, string title)
        : m_year(year), m_title(title)
    {
    }
    //!  only used when the key is of Object type
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

template <typename T, typename K>
void print_map(const map<T, K> &map)
{

    auto it = map.begin();

    cout << " map of elements : [";
    while (it != map.end())
    {

        cout << " [" << it->first << "," << it->second << "]";
        ++it;
    }
    cout << " ]" << endl;
}

int main()
{

    //! Code1 : Building maps : Notice that things are stored by key by default
    //  regardless of the order you put them in the collection in .
    cout << endl;
    cout << "Creating maps : " << endl;

    map<int, int> numbers{{1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}};

    cout << " numbers : ";
    print_map(numbers);

    //! Map of custom types : Need to implement operator<
    map<int, Book> books{
        {2, Book(1734, "Cooking Food")},
        {0, Book(1930, "Building Computers")},
        {1, Book(1995, "Farming for Beginners")}};
    cout << " books : ";
    print_map(books);

    cout << "--------------------------------------" << endl;

    //! Code2 : Element access with regular loops
    // A map can be though of as a collection of pair's
    cout << endl;
    cout << "Looping around printing stuff : " << endl;
    cout << endl;
    cout << " printing books with regular range based for loop [] syntax (C++17) :" << endl;
    for (const auto &[key, value] : books)
    {
        cout << "  book [ " << key << " ]:" << value << endl;
    }

    cout << endl;
    cout << " Traverse map with C++11 loop syntax : " << endl;
    ;
    for (const auto &elt : books)
    {
        cout << "  book [" << elt.first << " ] : " << elt.second << endl;
    }

    cout << endl;
    cout << " traverse map with loop (with explicit types) : " << endl;
    for (const pair<int, Book> &elt : books)
    {
        cout << "  book [" << elt.first << " ] : " << elt.second << endl;
    }

    cout << "--------------------------------------" << endl;

    // Keys can be anything
    cout << endl;
    cout << "keys can be anything : string in this case (stored by key) : " << endl;

    map<string, string> address_book;

    address_book["Daniel Gray"] = "Kigali, KG St 334 #56";
    address_book["Steve Moris"] = "Huye, SH St 27 #78";
    address_book["John Snow"] = "Musanze, NM St 33 #89";
    address_book["Henry King"] = "Muhanga, SM St 128 #3";

    for (const auto &[key, value] : address_book)
    {
        cout << " " << key << " lives at address : " << value << endl;
    }

    cout << "--------------------------------------" << endl;

    // Iterators
    cout << endl;
    cout << "Iterators : " << endl;

    auto it_access = numbers.begin();

    cout << " numbers (forward iterators) : [";
    while (it_access != numbers.end())
    {
        cout << " " << numbers[it_access->first];
        ++it_access;
    }
    cout << "]" << endl;

    cout << endl;
    cout << "modifying elements through iterators : " << endl;

    //! Iterate forward over numbers
    print_map(numbers);

    auto it_modify = numbers.begin();

    while (it_modify != numbers.end())
    {
        numbers[it_modify->first] = 222; // Modify values in the map
        ++it_modify;
    }
    print_map(numbers);

    //! Iterate over books in reverse
    cout << endl;
    cout << "(iterators) set of books (reverse) :" << endl;

    auto it_back_books = books.rbegin();
    while (it_back_books != books.rend())
    {
        // cout << " " << it_back_books->first << " - " << it_back_books->second << endl;

        //? Will require you to add a default constructor to Book.
        // This is an implementation detail of map. If we cut out the line
        // using operator[] the requirement for the default constructor goes away.
        cout << " " << it_back_books->first << " - " << books[it_back_books->first] << endl;
        ++it_back_books;
    }

    //! Code4 : Capacity :
    cout << "---------------------" << endl;

    cout << endl;
    cout << boolalpha;
    cout << "capacity : " << endl;

    cout << " numbers : ";
    print_map(numbers);
    cout << " map max_size : " << numbers.max_size() << endl;
    cout << " map is empty : " << numbers.empty() << endl;
    cout << " map size : " << numbers.size() << endl;

    cout << "---------------------" << endl;

    //! Modifiers

    //? Clear
    cout << endl;
    cout << "clear :" << endl;

    cout << " numbers : ";
    print_map(numbers);

    numbers.clear();

    cout << " numbers : ";
    print_map(numbers);
    cout << boolalpha;
    cout << " numbers is empty : " << numbers.empty() << endl;

    //! Insert  : return an pair object containing result about the insert operation.
    cout << endl;
    cout << "insert : " << endl;

    numbers = {{0, 11}, {1, 12}, {2, 13}, {3, 14}, {4, 15}};
    print_map(numbers);

    //! Insert key 2 : won't insert because set doesn't allow duplicate keys.
    // Will just do nothing and won't give an error though.
    numbers.insert({2, 44});

    // numbers.insert({5,16});//Works

    cout << "After insert {2,44} : ";
    // cout << "After insert {5,16} : " ;
    print_map(numbers);

    // Can capture the insert result through a returned pair object.
    auto result = numbers.insert({6, 17});

    cout << " result.second : " << result.second << endl;

    if (result.second)
    {
        cout << " Insertion successful" << endl;
    }
    else
    {
        cout << " Couldn't inser in the set. It's a duplicate!" << endl;
    }
    print_map(numbers);

    // Emplace
    cout << endl;
    cout << "emplace : " << endl;

    cout << " before emplace : ";
    print_map(numbers);

    auto result_emplace = numbers.emplace(make_pair(7, 18));

    if (result_emplace.second)
    {
        cout << " Emplace  successful" << endl;
    }
    else
    {
        cout << " Emplace  FAILED" << endl;
    }

    cout << " after emplace : ";
    print_map(numbers);

    // Erase
    cout << endl;
    cout << "erase : " << endl;

    print_map(numbers);

    auto it_erase = numbers.find(3); // Find element with key 3

    if (it_erase != numbers.end())
    {
        cout << " Found element with key " << it_erase->first << " ! : " << it_erase->second << endl;
    }
    else
    {
        cout << " Couldn't find element with key 3 !" << endl;
    }

    // Erase the element with key 3
    if (it_erase != numbers.end())
        numbers.erase(it_erase);

    print_map(numbers);

    // Changing comparators : There are many ways this can be done, but I am
    // going to give you a few variations to get you started.

    cout << endl;
    cout << "Changing comparators : " << endl;

    // map<int,int> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};//Default
    // map<int,int,less<int>> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};//Built in functor
    // map<int,int,greater<int>> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};

    // Custom functor
    // map<int,int,IntComparator> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};

    // Custom funtion pointer
    /*
    map<int,int,bool(*)(int,int)> numbers2(compare_ints);
    numbers2.insert({{1,11},{0,12},{4,13},{2,14},{3,15}});
    */

    //! Lambda function
    map<int, int, function<bool(int, int)>> numbers2([](int left, int right)
                                                     { return left > right; });
    numbers2.insert({{1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}});

    cout << "numbers2 : [ ";
    for (const auto &[key, value] : numbers2)
    {
        cout << " (" << key << "," << value << ")";
    }
    cout << "]" << endl;

    cout << endl;
    map<string, int> m; //! lexicographically sorted (self balaced tree internally)
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["laptop"] = 10;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("remote", 10);

    cout << m.count("watch") << endl;
    cout << m.count("bike") << endl;

    cout << m["watch"] << endl;

    m.erase("laptop");

    // if found return an iterator else m.end()
    if (m.find("watch") != m.end())
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}