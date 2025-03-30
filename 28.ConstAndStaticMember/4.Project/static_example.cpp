#include "static_example.h"
#include <iostream>

// ✅ Definition of static variable (only one per program)
static int file_static_var = 0;

int StaticClass::object_count = 0;  // ✅ Required definition

void increment_static() {
    file_static_var++;
    std::cout << "Static variable in file scope: " << file_static_var << std::endl;
}

StaticClass::StaticClass() {
    object_count++;
}

void StaticClass::show_count() {
    std::cout << "Static object count: " << object_count << std::endl;
}
