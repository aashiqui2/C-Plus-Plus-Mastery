#include <iostream>
#include <set> // multiset
#include <map> //multimap
using namespace std;

class Book
{
    friend ostream &operator<<(ostream &out, const Book &operand);

public:
    Book() = default;
    Book(int year, string title)
        : m_year(year), m_title(title)
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
void print_multiset(const multiset<T> &m_set)
{

    auto it = m_set.begin();

    cout << "multiset of elements : [";
    while (it != m_set.end())
    {

        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;
}

template <typename T, typename K>
void print_multimap(const multimap<T, K> &m_map)
{

    auto it = m_map.begin();

    cout << "multimap of elements : [";
    while (it != m_map.end())
    {

        cout << " [" << it->first << "," << it->second << "]";
        ++it;
    }
    cout << "]" << endl;
}

int main()
{

    multiset<int> numbers = {1, 2, 1, 6, 2, 8, 3, 9, 4, 24, 6, 2};

    multiset<Book> books = {Book(1734, "Cooking Food"),
                            Book(1930, "Building Computers"), Book(1734, "Farming for Beginners")};

    cout << "numbers : ";
    print_multiset(numbers);

    cout << "books : ";
    print_multiset(books);

    cout << endl;
    cout << "multimap : " << endl;

    multimap<int, string> office_numbers = {
        make_pair(101, "Daniel Gray"),
        make_pair(102, "John Snow"),
        make_pair(103, "Jamie Lanister"),
        make_pair(102, "Van Gomir"),
        make_pair(101, "Kay Moris"),
        make_pair(102, "Zuba Loy"),
    };

    cout << "office_numbers : ";
    print_multimap(office_numbers);

    multimap<int, Book> other_books = {
        make_pair(0, Book(1734, "Cooking Food")),
        make_pair(1, Book(1930, "Building Computers")),
        make_pair(1, Book(1995, "Farming for Beginners"))};

    cout << "other_books : ";
    print_multimap(other_books);

    // The rest of the cool stuff you can do with this can be browsed through
    // the documentation.Many methods are similar to the set and map
    // counterparts.

    office_numbers.erase(office_numbers.find(101));
    print_multimap(office_numbers);

    return 0;
}