#include <iostream>
#include <list>
using namespace std;
void print_list(const list<int> &l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    //! internally implmeted as doubly linked list
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    print_list(l);
    l.pop_back();
    l.pop_front();
    print_list(l);

    l.emplace_back(6);
    l.emplace_front(4);
    print_list(l);

    //! Random access not possible
    // cout << l[0] << endl;//cannot access by [index] like vector

    return 0;
}