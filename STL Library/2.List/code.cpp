#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
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

int main()
{

    list<int> numbers = {11, 12, 13, 14, 15}; // internally doubly linked list

    //! Code1 : Element access
    cout << "---------------------" << endl;
    cout << endl;
    cout << "element access : " << endl;

    print_collection(numbers);

    cout << " front element : " << numbers.front() << endl;
    cout << " back element : " << numbers.back() << endl;

    //! cannot access by []
    // cout << numbers[0] << endl;//error

    cout << " back element : " << numbers.back() << endl;

    //! Code2 : Iterators : forward and back, and constant
    cout << endl;
    cout << "iterators : " << endl;

    auto it = numbers.begin();

    cout << " (iterators) list of numbers : [";
    while (it != numbers.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;

    //! Reverse iterators
    auto it_back = numbers.rbegin();

    cout << " (iterators) list of numbers (reverse) : [";
    while (it_back != numbers.rend())
    {
        cout << " " << *it_back;
        ++it_back;
    }
    cout << "]" << endl;

    //! Code3 : Capacity
    cout << "---------------------" << endl;

    cout << endl;
    cout << "capacity : " << endl;
    cout << " list max_size : " << numbers.max_size() << endl;
    cout << " list is empty : " << numbers.empty() << endl;
    cout << " list size : " << numbers.size() << endl;

    //! Code4 : Modifiers

    cout << "---------------------" << endl;
    cout << endl;
    cout << "modifiers : " << endl;

    //? Clear
    cout << endl;
    cout << "clear :" << endl;
    print_collection(numbers);

    numbers.clear();

    print_collection(numbers);
    cout << boolalpha;
    cout << " numbers is empty : " << numbers.empty() << endl;

    //? Insert
    cout << endl;
    cout << "insert : " << endl;
    numbers = {11, 12, 13, 14, 15};

    print_collection(numbers);
    auto it_insert = find(numbers.begin(), numbers.end(), 13);

    if (it_insert != numbers.end())
        numbers.insert(it_insert, 333); // Inserts after it_insert

    print_collection(numbers);

    //? Emplace
    cout << endl;
    cout << "emplace : " << endl;

    print_collection(numbers);

    it_insert = find(numbers.begin(), numbers.end(), 14); // Emplace in front of 14

    if (it_insert != numbers.end())
        numbers.emplace(it_insert, 444);

    print_collection(numbers);

    //? Erase
    cout << endl;
    cout << "erase : " << endl;

    print_collection(numbers);

    auto it_erase = find(numbers.begin(), numbers.end(), 333);

    if (it_erase != numbers.end())
    {
        cout << "Found 333 !" << endl;
    }
    else
    {
        cout << "Couldn't find 333 !" << endl;
    }

    //? Erase the 333
    if (it_erase != numbers.end())
        numbers.erase(it_erase);

    print_collection(numbers);

    //? Pop_front and pop_back
    // pop_front
    cout << endl;
    cout << "pop_front : " << endl;

    print_collection(numbers);

    numbers.pop_front();

    print_collection(numbers);

    //? pop_back
    cout << endl;
    cout << "pop_back : " << endl;

    print_collection(numbers);

    numbers.pop_back();

    print_collection(numbers);

    //? Push front and push_back
    // push_front
    cout << endl;
    cout << "push_front : " << endl;

    print_collection(numbers);

    numbers.push_front(111);

    print_collection(numbers);

    //? push_back
    cout << endl;
    cout << "push_back : " << endl;

    print_collection(numbers);

    numbers.push_back(222);

    print_collection(numbers);

    //? emplace front and back
    cout << endl;
    cout << "emplace front (333) and back (444) : " << endl;

    print_collection(numbers);

    numbers.emplace_front(333);
    numbers.emplace_back(444);

    print_collection(numbers);

    //? resize : up or down
    cout << endl;
    cout << "resize : " << endl;

    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    numbers.resize(20);

    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    numbers.resize(3); //? When you resize down, the elements are lost for good.
                       //? if you resize up again,you won't get them back.

    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    numbers.resize(20);

    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    //? swap
    cout << endl;
    cout << "swap : " << endl;

    list<int> other_numbers{200, 400, 600};

    cout << " numbers : ";
    print_collection(numbers);

    cout << " other_numbers :";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    cout << " numbers : ";
    print_collection(numbers);

    cout << " other_numbers :";
    print_collection(other_numbers);

    //! Other operations
    cout << "---------------------" << endl;
    cout << "Other operations : " << endl;

    //? Merge
    cout << endl;
    cout << "merge : " << endl;

    list<int> numbers1{1, 5, 6};
    list<int> numbers2{9, 2, 4};

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    //? merge
    numbers1.merge(numbers2);

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    // splice : move elements from one collection to another
    //           numbers2 is moved into numbers1
    cout << endl;
    cout << "splice : " << endl;

    numbers1 = {1, 5, 6, 8, 3};
    numbers2 = {9, 2, 4, 7, 13, 11, 17};

    cout << " numbers1 : ";
    print_collection(numbers1);
    cout << " numbers2 : ";
    print_collection(numbers2);

    //? Find the iterator you want to start splicing from (element 6 from numbers1)
    auto it_splice = find(numbers1.begin(), numbers1.end(), 6);

    if (it_splice != numbers1.end())
        numbers1.splice(it_splice, numbers2);

    cout << " numbers1 : ";
    print_collection(numbers1);
    cout << " numbers2 : ";
    print_collection(numbers2);

    //! Remove- all Occurences
    cout << endl;
    cout << "remove : " << endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.remove(1); //? remove both elements equal to 1

    print_collection(numbers);

    //! Remove predicate: Can be a function pointer, functor or lambda function.
    //(Predicates:is a function returns a boolean value (true or false) based on some condition.)
    // Will explore this in more details later in the chapter when we talk about algorithms.
    numbers.remove_if([](int n)
                      { return n > 10; });

    print_collection(numbers);

    //? reverse
    cout << endl;
    cout << "reverse : " << endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.reverse();

    print_collection(numbers);

    //? Unique : Remove contiguous duplicates
    cout << endl;
    cout << "unique : " << endl;

    numbers = {1, 100, 100, 2, 3, 10, 1, 11, 11, -1, 12, 10, 1};

    print_collection(numbers);

    numbers.unique();

    print_collection(numbers);

    //? Sort
    cout << endl;
    cout << "sort : " << endl;

    print_collection(numbers);

    numbers.sort();

    print_collection(numbers);

    numbers.unique();

    print_collection(numbers);

    return 0;
}