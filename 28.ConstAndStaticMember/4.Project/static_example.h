#ifndef STATIC_EXAMPLE_H
#define STATIC_EXAMPLE_H

void increment_static();  // Function prototype

class StaticClass {
public:
    StaticClass();
    static void show_count();
private:
    static int object_count;  // ✅ Needs definition in .cpp
};

#endif
