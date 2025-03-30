#include <iostream>

class Test {
public:
    Test(int x) {  // Constructor without 'explicit'
        std::cout << "Constructor called with value: " << x << std::endl;
    }
};

int main() {
    Test obj = 10;  // Implicit conversion happens here
    return 0;
}
