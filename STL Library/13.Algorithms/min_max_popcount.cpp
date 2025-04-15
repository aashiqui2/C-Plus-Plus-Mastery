#include <iostream>
#include <vector>
#include <algorithm> // swap, sort, binary_search, min_element, max_element
#include <bitset>    // optional: for binary printing

using namespace std;

int main()
{
    vector<int> data = {10, 30, 50, 20, 40};

    // Swap
    cout << "Before swap: " << data[0] << " " << data[1] << endl;
    swap(data[0], data[1]);
    cout << "After swap: " << data[0] << " " << data[1] << endl;

    // Min/Max
    auto min_it = min_element(data.begin(), data.end());
    auto max_it = max_element(data.begin(), data.end());

    cout << "Min element: " << *min_it << endl;
    cout << "Max element: " << *max_it << endl;

    // Binary search
    sort(data.begin(), data.end());
    cout << "Sorted data: ";
    for (int n : data)
        cout << n << " ";
    cout << endl;

    int key = 30;
    bool found = binary_search(data.begin(), data.end(), key);
    cout << "Binary search for " << key << ": " << (found ? "Found" : "Not Found") << endl;

    // Count set bits
    int a = 29;            // 00011101 => 4 bits
    long b = 123456789L;   // platform-dependent
    long long c = 123456789012345LL;

    cout << "\nSet bit counts:" << endl;
    cout << "int    (" << bitset<32>(a) << "): " << __builtin_popcount(a) << " bits" << endl;
    cout << "long   (" << bitset<64>(b) << "): " << __builtin_popcountl(b) << " bits" << endl;
    cout << "long long (" << bitset<64>(c) << "): " << __builtin_popcountll(c) << " bits" << endl;

    return 0;
}
