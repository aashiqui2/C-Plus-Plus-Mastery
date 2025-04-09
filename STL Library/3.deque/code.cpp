#include <iostream>
#include <deque>
using namespace std;
void print_deque(const deque<int> &l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    //! double ended queue
    deque<int> d = {1, 2, 3};
    print_deque(d);
    cout << d[0] << endl;

    return 0;
}