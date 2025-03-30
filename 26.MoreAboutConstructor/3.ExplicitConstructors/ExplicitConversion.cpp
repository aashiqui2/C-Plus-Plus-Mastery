#include <iostream>

class Test {
public:
    explicit Test(int x) {  // Constructor marked as 'explicit'
        std::cout << "Constructor called with value: " << x << std::endl;
    }
};

int main() {
    // Test obj = 10;  // ❌ Error: Implicit conversion is not allowed
    Test obj(10);  // ✅ Explicit construction
    return 0;
}
