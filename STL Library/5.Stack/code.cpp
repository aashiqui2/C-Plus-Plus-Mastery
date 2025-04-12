#include <iostream>
#include <stack>
#include <vector>
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
void print_stack(stack<T, Container> stack)
{

    // template <typename T>
    // void print_stack(stack<T> stack){

    //? Notice that we're working on a copy here. IMPORTANT
    cout << "stack of elements : [";
    while (!stack.empty())
    {
        T item = stack.top();
        cout << " " << item;
        stack.pop(); //? Poping from a copy doesn't affect the original. We're good here.
    }
    cout << "]" << endl;
}

template <typename T, typename Container = deque<T>>
void clear_stack(stack<T, Container> &stack)
{
    // template <typename T>
    // void clear_stack(stack<T>& stack){

    cout << "Clearing stack of size : " << stack.size() << endl;
    while (!stack.empty())
    {
        stack.pop();
    }
}

int main()
{
    //! Code1 : Creating stacks and storing data in
    stack<int> numbers1;

    cout << " numbers1 : ";
    print_stack(numbers1); // empty

    numbers1.push(10);
    numbers1.push(20);
    numbers1.push(30);

    cout << "numbers1 : ";
    print_stack(numbers1); // 30 20 10 : FILO

    numbers1.push(40);
    numbers1.push(50);

    cout << "numbers1 : ";
    print_stack(numbers1); // 50 40 30 20 10  : FILO

    cout << "-----" << endl;

    //! Accessing elements
    cout << "top : " << numbers1.top() << endl;
    //? Pop off the top
    print_stack(numbers1);
    numbers1.pop();
    print_stack(numbers1);
    cout << "top : " << numbers1.top() << endl;

    // We can organize these calls to top and pop into a function
    //  that can nicely show the contents of a stack. That's what print_stack does

    cout << "-----" << endl;

    //! Code2 : Modifying the top element through the reference returned by top()
    // top() returns a reference. We can use that to modify the underlying
    // element in the stack
    cout << "numbers1 : ";
    print_stack(numbers1);

    numbers1.top() = 55;

    cout << "numbers1 : ";
    print_stack(numbers1);

    //! Code3 : Clearing a stack
    cout << endl;
    cout << "clearing a stack : " << endl;

    cout << "stack initial size : " << numbers1.size() << endl;
    cout << "numbers1 (before) : ";
    print_stack(numbers1);

    clear_stack(numbers1);

    cout << "stack final size : " << numbers1.size() << endl;
    cout << "numbers1(after) : ";
    print_stack(numbers1);

    //! Code4 : Stack of user defined types
    stack<Book> books;
    books.push(Book(1921, "The Art of War"));
    books.push(Book(2000, "Social Media Marketing"));
    books.push(Book(2020, "How the Pandemic Changed the World"));

    cout << "books : ";
    print_stack(books);
    cout << "books size : " << books.size() << endl;

    //! Custom underlying sequence container

    stack<int, vector<int>> numbers2;
    stack<int, list<int>> numbers3;
    stack<int, deque<int>> numbers4;

    numbers2.push(5); // underlying container : vector
    numbers2.push(6);

    numbers3.push(7); // underlying container : list
    numbers3.push(8);

    numbers4.push(9); //  underlying container : deque
    numbers4.push(10);

    cout << " numbers4 : ";
    print_stack(numbers4); // OK

    cout << " numbers3 : ";
    print_stack(numbers3); // Compiler error

    cout << " numbers2 : ";
    print_stack(numbers2); // Compiler error

    return 0;
}