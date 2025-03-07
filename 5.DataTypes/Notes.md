### **🔹 Data Types in C++**
C++ provides several **data types** categorized into **basic, derived, user-defined, and pointer types**.  

---

## **🔹 1. Fundamental (Primitive) Data Types**
These are the basic built-in types.  

| Data Type  | Size (Typical) | Example  | Description  |
|------------|--------------|----------|-------------|
| `int`      | 4 bytes      | `int x = 10;`  | Stores whole numbers. |
| `float`    | 4 bytes      | `float pi = 3.14;`  | Stores decimal numbers (single precision). |
| `double`   | 8 bytes      | `double bigPi = 3.1415926535;`  | Stores decimal numbers (double precision). |
| `char`     | 1 byte       | `char letter = 'A';`  | Stores a single character. |
| `bool`     | 1 byte       | `bool isTrue = true;`  | Stores `true` or `false`. |
| `void`     | N/A          | `void func();`  | Used for functions that return nothing. |
| `wchar_t`  | 2-4 bytes    | `wchar_t wideChar = L'A';`  | Stores wide characters (Unicode). |

---

## **🔹 2. Derived Data Types**  
Derived from primitive data types.

| Data Type  | Example | Description  |
|------------|---------|-------------|
| `array`    | `int arr[5] = {1,2,3,4,5};` | Stores multiple values of the same type. |
| `pointer`  | `int* ptr = &x;` | Stores memory addresses. |
| `reference`| `int &ref = x;` | Creates an alias for a variable. |
| `function` | `int add(int a, int b);` | Functions returning a specific data type. |

---

## **🔹 3. User-Defined Data Types**  
Created by the user using built-in types.

| Data Type  | Example  | Description  |
|------------|---------|-------------|
| `struct`   | `struct Student { int id; };` | Groups related variables together. |
| `class`    | `class Car { public: int speed; };` | Defines objects with properties & methods. |
| `union`    | `union Data { int i; float f; };` | Stores multiple data types in the same memory location. |
| `enum`     | `enum Color { RED, GREEN, BLUE };` | Defines named integer constants. |
| `typedef`  | `typedef unsigned int uint;` | Gives an alias to a data type. |
| `using`    | `using uint = unsigned int;` | Modern alias for a type (C++11+). |

---

## **🔹 4. Pointer Data Types**
Used to store **memory addresses** of variables.

| Data Type  | Example  | Description  |
|------------|---------|-------------|
| `int*`     | `int* ptr = &x;` | Pointer to an integer. |
| `float*`   | `float* ptr = &pi;` | Pointer to a float. |
| `void*`    | `void* ptr;` | Generic pointer (can point to any type). |

---

## **🔹 5. Modifier Data Types**  
Modifiers change the size or behavior of basic data types.

| Modifier  | Example  | Description  |
|------------|---------|-------------|
| `signed`   | `signed int x;` | Can store both positive and negative values. |
| `unsigned` | `unsigned int y;` | Stores only positive values. |
| `short`    | `short int a;` | Smaller range than `int`. |
| `long`     | `long int b;` | Larger range than `int`. |
| `long long` | `long long int c;` | Even larger than `long int`. |

---

## **🔹 Summary of C++ Data Types**
C++ has a **rich set of data types** including:
1. **Primitive Types** (`int`, `float`, `double`, `char`, `bool`, `void`, `wchar_t`)
2. **Derived Types** (`array`, `pointer`, `reference`, `function`)
3. **User-Defined Types** (`struct`, `class`, `union`, `enum`, `typedef`, `using`)
4. **Pointer Types** (`int*`, `float*`, `void*`)
5. **Modifiers** (`signed`, `unsigned`, `short`, `long`, `long long`)

Would you like detailed examples for any specific type? 🚀