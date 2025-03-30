#include "static_example.h"
#include "inline_example.h"

int main() {
    // Test `static` variable
    increment_static();
    increment_static();

    StaticClass obj1, obj2;
    StaticClass::show_count();

    // Test `inline` variable
    std::cout << "Initial inline variable: " << shared_inline_var << std::endl;
    modify_inline_var();
    std::cout << "Modified inline variable: " << shared_inline_var << std::endl;

    // Test `inline static` variable
    InlineClass::show_data();

    // Test `inline static const` variable
    Constants::print_constants();

    return 0;
}
