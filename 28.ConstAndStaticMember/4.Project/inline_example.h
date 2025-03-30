#ifndef INLINE_EXAMPLE_H
#define INLINE_EXAMPLE_H

#include <iostream>

inline int shared_inline_var = 100; // ✅ Shared across files

void modify_inline_var();

class InlineClass
{
public:
    static void show_data();

private:
    inline static int shared_data = 500; // ✅ No .cpp definition needed
};
class Constants
{
public:
    static void print_constants();

private:
    static inline const double PI = 3.14159; // ✅ Compile-time constant
    static inline const int MAX_VALUE = 1000;
};

#endif
