### **C++ Data Types and Their Sizes**
The size of data types in C++ depends on the **compiler** and **platform (32-bit or 64-bit system)**. Below is a table showing common data types along with their typical sizes (in bytes) for both **32-bit and 64-bit** systems.

---

### **Fundamental Data Types in C++**
| **Data Type** | **Size (32-bit)** | **Size (64-bit)** | **Range** |
|-------------|------------|------------|--------------------------------------------------|
| `bool` | 1 byte | 1 byte | `true` (1) or `false` (0) |
| `char` | 1 byte | 1 byte | `-128` to `127` (signed) or `0` to `255` (unsigned) |
| `wchar_t` | 2 bytes | 4 bytes | Platform-dependent (wide character type) |
| `char16_t` | 2 bytes | 2 bytes | UTF-16 character |
| `char32_t` | 4 bytes | 4 bytes | UTF-32 character |
| `short` | 2 bytes | 2 bytes | `-32,768` to `32,767` |
| `int` | 4 bytes | 4 bytes | `-2,147,483,648` to `2,147,483,647` |
| `long` | 4 bytes | 8 bytes | **(32-bit system)**: Same as `int` <br> **(64-bit system)**: `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` |
| `long long` | 8 bytes | 8 bytes | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` |
| `float` | 4 bytes | 4 bytes | ~`3.4E-38` to `3.4E+38` (single precision) |
| `double` | 8 bytes | 8 bytes | ~`1.7E-308` to `1.7E+308` (double precision) |
| `long double` | 8, 12, or 16 bytes | 16 bytes | Higher precision than `double` (varies by compiler) |
| `void` | 0 bytes | 0 bytes | Represents no type (used in functions) |

---

### **Signed and Unsigned Variants**
| **Type** | **Size** | **Signed Range** | **Unsigned Range** |
|---------|---------|----------------|----------------|
| `signed char` | 1 byte | `-128` to `127` | **N/A** |
| `unsigned char` | 1 byte | **N/A** | `0` to `255` |
| `signed short` | 2 bytes | `-32,768` to `32,767` | **N/A** |
| `unsigned short` | 2 bytes | **N/A** | `0` to `65,535` |
| `signed int` | 4 bytes | `-2,147,483,648` to `2,147,483,647` | **N/A** |
| `unsigned int` | 4 bytes | **N/A** | `0` to `4,294,967,295` |
| `signed long` | 4 bytes (32-bit) / 8 bytes (64-bit) | Depends on architecture | **N/A** |
| `unsigned long` | 4 bytes (32-bit) / 8 bytes (64-bit) | **N/A** | Platform dependent |
| `signed long long` | 8 bytes | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` | **N/A** |
| `unsigned long long` | 8 bytes | **N/A** | `0` to `18,446,744,073,709,551,615` |

---

### **Pointer Types**
| **Type** | **Size (32-bit)** | **Size (64-bit)** |
|---------|------------|------------|
| `int*` (Pointer to `int`) | 4 bytes | 8 bytes |
| `char*` (Pointer to `char`) | 4 bytes | 8 bytes |
| `double*` (Pointer to `double`) | 4 bytes | 8 bytes |
| `void*` (Generic pointer) | 4 bytes | 8 bytes |

---

### **Type Size Checking in C++**
You can check the size of any data type using the `sizeof` operator:

```cpp
#include <iostream>

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of void*: " << sizeof(void*) << " bytes\n"; // Pointer size depends on system
    return 0;
}
```

---

### **Notes:**
- The actual size of data types **depends on the compiler and platform**.
- The `long` type is **4 bytes on a 32-bit system** but **8 bytes on a 64-bit system** (especially in Linux).
- Use `sizeof(type)` to determine actual sizes in a given environment.

Would you like a version of this table formatted for easy reference in a document? 🚀