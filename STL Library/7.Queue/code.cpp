#include <iostream>
#include <queue>
#include <list>
#include <deque>
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

template <typename T, typename Container = deque<T>>
void print_queue(queue<T, Container> queue)
{

    cout << " queue of items : [";
    while (!queue.empty())
    {
        T item = queue.front();
        cout << " " << item;
        queue.pop();
    }
    cout << "]" << endl;
}

template <typename T, typename Container = deque<T>>
void clear_queue(queue<T, Container> &queue)
{
    cout << " Clearing queue of size : " << queue.size() << endl;

    while (!queue.empty())
    {
        queue.pop();
    }
}

int main()
{

    //! Code1 : Creating  pushing and accessing
    cout << "Creating pushing and accessing : " << endl;
    queue<int> numbers1;

    cout << " numbers1 : ";
    print_queue(numbers1);

    numbers1.push(10);
    numbers1.push(20);
    numbers1.push(30);

    cout << " numbers1 : ";
    print_queue(numbers1);

    numbers1.push(40);
    numbers1.push(50);

    cout << " numbers1 : ";
    print_queue(numbers1);

    //? Access
    cout << " numbers1.front() :  " << numbers1.front() << endl;
    cout << " numbers1.back() : " << numbers1.back() << endl;

    //! Code2 : Modify through top : this is because front and back return  a reference
    cout << endl;
    cout << "modify top element through front and back :" << endl;

    cout << " numbers1 (before modification) : ";
    print_queue(numbers1);

    numbers1.front() = 500;
    numbers1.back() = 600;

    cout << " numbers1 (after modification) : ";
    print_queue(numbers1);

    //! Code3 : poping
    cout << endl;
    cout << "poping data : " << endl;

    cout << " numbers1 : ";
    print_queue(numbers1);

    numbers1.pop();

    cout << " numbers1 : ";
    print_queue(numbers1);

    numbers1.pop();

    cout << " numbers1 : ";
    print_queue(numbers1);

    //! Code4 : Clearing a queue
    cout << endl;
    cout << "clearing a queue : " << endl;

    cout << " queue initial size : " << numbers1.size() << endl;

    cout << " numbers1 (before) : ";
    print_queue(numbers1);

    clear_queue(numbers1);

    cout << " queue final size : " << numbers1.size() << endl;
    cout << " numbers1(after) : ";
    print_queue(numbers1);

    // Code5 : Queue of user defined types
    cout << endl;
    cout << "queue of user defined type :" << endl;

    queue<Book> books;

    books.push(Book(1921, "The Art of War"));
    books.push(Book(2000, "Social Media Marketing"));
    books.push(Book(2020, "How the Pandemic Changed the World"));

    cout << " books : ";
    print_queue(books);
    cout << " books size : " << books.size() << endl;
    cout << " front book : " << books.front() << endl;
    cout << " back book : " << books.back() << endl;

    //! Code6 Specify underlying container
    cout << endl;
    cout << "custom underlying sequence container : " << endl;

    queue<int, list<int>> numbers3;
    queue<int, deque<int>> numbers4;

    numbers3.push(3);
    numbers3.push(4);

    numbers4.push(5);
    numbers4.push(6);

    cout << " numbers3 : ";
    print_queue(numbers3);

    cout << " numbers4 : ";
    print_queue(numbers4);

    // try  swap,empty emplace

    return 0;
}