#include <iostream>
#include <stack>
using namespace std;

class Book
{
    friend ostream &operator<<(ostream &out, const Book &operand);

public:
    Book() = default;
    Book(int year, string title)
        : m_year(year), m_title(title) {}

private:
    int m_year;
    string m_title;
};

// Overloading << for Book
ostream &operator<<(ostream &out, const Book &operand)
{
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

//! Utility function to print stack of integers (passed by value to preserve original)
void print_stack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;
}

//! Utility function to print stack of Book objects (copy to preserve original)
template <typename T, typename Container = deque<int>>
void print_stack1(stack<T, Container> s)
{
    cout << "Stack of books: [";
    while (!s.empty())
    {
        Book item = s.top();
        cout << " " << item;
        s.pop();
    }
    cout << " ]" << endl;
}

int main()
{
    // Integer stack operations
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout << "Size of s1: " << s1.size() << endl;

    stack<int> s2;
    s2.swap(s1); // Now s2 contains 1, 2, 3

    cout << "After swap:\n";
    cout << "Size of s1: " << s1.size() << endl; // Should be 0
    cout << "Size of s2: " << s2.size() << endl; // Should be 3

    cout << "Top element in s2: " << s2.top() << endl;

    // Book stack operations
    stack<Book> books;
    books.push(Book(1921, "The Art of War"));
    books.push(Book(2000, "Social Media Marketing"));
    books.push(Book(2020, "How the Pandemic Changed the World"));

    cout << "\nBooks in stack:\n";
    print_stack1(books); // Safe, original stack remains unchanged
    cout << "Books stack size: " << books.size() << endl;

    return 0;
}
