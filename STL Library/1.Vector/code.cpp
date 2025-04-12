#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    Item() : m_var(0)
    {
        cout << "Item default constructor called" << endl;
    }
    Item(int var) : m_var(var)
    {
        // cout << "Item constructor called for: " << m_var <<endl;
    }
    Item(int var1, int var2) : m_var(var1 * var2)
    {
    }

    Item(const Item &source) : m_var{source.m_var}
    {
        // cout << "Item copy constructor called for :" << m_var <<endl;
    }

    int get() const
    {
        return m_var;
    }

private:
    int m_var{0};
};

ostream &operator<<(ostream &out, const Item &item)
{
    out << "Item [ value : " << item.get() << "]";
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

int main()
{

    //! Code1 :Collection creation and element access
    cout << endl;
    cout << "Creatingvector's : " << endl;
    vector<int> numbers{1, 2, 3, 4, 5}; // Default initialized vector.
    vector<Item> items{Item(6), Item(7), Item(8), Item(9), Item(10)};

    cout << " numbers  : ";
    print_collection(numbers);
    cout << " items : ";
    print_collection(items);

    //! Accessing elements
    cout << endl;
    cout << "Element access : " << endl;
    cout << " numbers[3] : " << numbers[3] << endl;       // No bound check
    cout << " numbers.at(3) : " << numbers.at(3) << endl; // Bound check

    //? No bounds check, undefined behavior, junk value or even crash.
    cout << " numbers[30] (Undefined behavior):" << numbers[30] << endl;
    // cout << " numbers.at(30) (throws expception): " << numbers.at(30) <<endl;

    cout << " numbers.front() : " << numbers.front() << endl;
    cout << " numbers.back() :" << numbers.back() << endl;

    //! Data method
    cout << " numbers[3] (with underlying data array) : " << (*(numbers.data() + 3)) << endl;

    //! Code2 : Iterators
    cout << "-----------------------" << endl;

    cout << endl;
    cout << "Iterators : " << endl;

    //? begin() and end()
    auto it = numbers.begin();

    cout << " Vector(With iterators) : [ ";
    while (it != numbers.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << " ]" << endl;

    //! Reverse traversal with rbebin and rend
    auto it_reverse = numbers.rbegin(); // non const iterator

    cout << " Vector(Reverse traversal with iterators) : [ ";
    while (it_reverse != numbers.rend())
    {
        cout << " " << *it_reverse;
        ++it_reverse; // Increments towards the first element of the array.
    }
    cout << " ]" << endl;

    cout << "-----------------------" << endl;

    //! Code3 : Capacity

    cout << endl;

    cout << "capacity : " << endl;
    cout << " numbers : ";
    print_collection(numbers);

    cout << " numbers size : " << numbers.size() << endl;
    cout << " numbers max_size : " << numbers.max_size() << endl;
    cout << boolalpha; // Force output of bool as true or false instead of 1 or 0
    cout << " numbers is empty : " << numbers.empty() << endl;
    cout << " numbers capacity : " << numbers.capacity() << endl;

    numbers.push_back(20);
    cout << " numbers (after push_back) : ";
    print_collection(numbers);
    cout << " numbers capacity : " << numbers.capacity() << endl;

    numbers.shrink_to_fit();
    cout << " numbers (after shrink_to_fit) : ";
    print_collection(numbers);
    cout << " numbers capacity : " << numbers.capacity() << endl;

    numbers.reserve(20);
    cout << " numbers(after reserve) : ";
    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;
    cout << " numbers capacity : " << numbers.capacity() << endl;

    cout << "-----------------------" << endl;

    //! Code4 : Modifier methods

    cout << endl;
    cout << "clear : " << endl;
    print_collection(numbers);

    //! Clear
    numbers.clear();

    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;
    cout << " numbers capacity : " << numbers.capacity() << endl;

    numbers = {10, 20, 30, 40, 50, 60};

    print_collection(numbers);

    // Insert
    // The element you provide as insert()’s second argument is
    // inserted right before the position referred to
    // by the iterator you provide as its first argument

    cout << endl;
    cout << "insert : " << endl;

    cout << " numbers(before insert) : ";
    print_collection(numbers);

    auto it_pos = numbers.begin() + 2;

    cout << "*it_pos : " << *it_pos << endl;

    numbers.insert(it_pos, 300);
    numbers.insert(it_pos, 400);
    // As we insert new items, it_pos changes the elements it's pointing to :it is  invalidated. Originaly it was pointing to 30. It keeps pointing at position 2 but the content at that position has changed.
    cout << " numbers (after insert 300,400) : ";
    print_collection(numbers);
    cout << "*it_pos : " << *it_pos << endl;

    // Emplace
    cout << endl;
    cout << "emplace : " << endl;
    print_collection(items);

    auto it_item_pos = items.begin() + 2;
    //! The parameters following the iterator are passed to a constructor of the type stored in the vector.
    items.emplace(it_item_pos, 45, 10);
    print_collection(items);

    // Erase
    cout << endl;
    cout << "erase : " << endl;
    print_collection(items);

    items.erase(items.begin() + 4);

    print_collection(items);

    // Range : visualize
    items.erase(items.begin() + 1, items.begin() + 4);

    print_collection(items);

    // Emplace_back
    cout << endl;
    cout << "emplace_back : " << endl;
    print_collection(items);

    items.emplace_back(10, 10); // equivalent to items.emplace(items.end() , 10,10);
    items.emplace_back(10, 11);
    items.emplace_back(10, 12);

    /*
    //The above is equivalent to the code below.
    items.emplace(items.end() , 10,10);
    items.emplace(items.end() , 10,11);
    items.emplace(items.end() , 10,12);
    */

    print_collection(items);

    // Pop back
    cout << endl;
    cout << "pop_back : " << endl;
    print_collection(items);

    items.pop_back();

    print_collection(items);

    //! Resize
    cout << endl;
    cout << "resize (Before) : " << endl;
    print_collection(items);
    cout << "items size : " << items.size() << endl;
    cout << "items capacity : " << items.capacity() << endl;

    items.resize(11); //! 🔥 Calls default constructor 11 times

    print_collection(items);
    cout << "after resize : " << endl;
    cout << "items size : " << items.size() << endl;
    cout << "items capacity : " << items.capacity() << endl;

    //! Swap
    cout << endl;
    cout << "swap : " << endl;

    vector<Item> other_items = {Item(22), Item(33), Item(44)};

    cout << "items : ";
    print_collection(items);

    cout << "other_items : ";
    print_collection(other_items);

    //! items.swap(other_items);
    other_items.swap(items);

    cout << "after swap : " << endl;

    cout << "items : ";
    print_collection(items);

    cout << "other_items : ";
    print_collection(other_items);

    return 0;
}