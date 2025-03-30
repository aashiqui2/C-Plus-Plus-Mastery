#include "inline_example.h"

void modify_inline_var() {
    shared_inline_var += 10;  // ✅ Shared across translation units
}

void InlineClass::show_data() {
    std::cout << "Inline static variable: " << shared_data << std::endl;
}

void Constants::print_constants() {
    std::cout << "PI: " << PI << ", Max Value: " << MAX_VALUE << std::endl;
}
