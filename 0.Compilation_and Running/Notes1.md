# How do Source Files Import and Export Symbols?
we created a C++ source code file named sum.cpp containing two export functions: Int_Sum for adding two integer values and Float_Sum for adding two float values.
```c++
// sum.cpp file containing two functions ready to be exported.

// Int_Sum function to calculate and return the sum of integer values x and y.
int Int_Sum(int x, int y){ 
    return x + y;
}

// Float_Sum function to calculate and return the sum of float values x and y.
float Float_Sum(float x, float y){ 
    return x + y;
}
```
Now, we will compile the above source code file to obtain an object file named `sum.o` using the below command:
```cmd
g++ -c sum.cpp 
```

After generating the object file sum.o, we can now check for the symbols being exported or imported using the nm command, which displays information about the symbols in the specified file (which can be an object file or an executable file).
```cmd
nm sum.o 
```
## Output:
Note that only useful information has been displayed in the output.
```txt
00000000 t .text
00000000 T __Z7Int_Sumii     // Exported symbol
0000000d T __Z9Float_Sumff  // Exported symbol
```
To import and call the above function names, we need to declare them first. The best way is to create a header file that declares the function names and by which we can include this header file in the source file where we want to call the required function names.

We have created a sum.h header file to declare function names: Int_Sum and Float_Sum.

```c++
// sum.h header file.
extern "C"{
    int Int_Sum(int x, int y);
    float Float_Sum(float x, float y);
}
```
Now let us create another source code file named output.cpp where we will use the "sum.h" header file to call function names: Int_Sum and Float_Sum.
```c++
// output.cpp file.
#include <iostream> // Header file inclusion
#include "sum.h" // Importing sum.h header file to call Int_Sum, Float_Sum functions.
using namespace std;

extern "C"
void printSumInt(int a, int b) {
  cout << a << " + " << b << ": " << Int_Sum(a, b) << endl; // Calling Int_Sum function provided by the sum.h header file to calculate the sum of integer values a and b.
}

extern "C"
void printSumFloat(float a, float b) {
  cout << a << " + " << b << ": " << Float_Sum(a, b) << endl; 
    // Calling Float_Sum function provided by the sum.h header file to calculate the sum of float values a and b.
}
```
As we have discussed above also, C++ mangles (changes or translates) function names, but that is not the case when we declare function names using the extern "C". Let us find out that by compiling the source code file output.cpp and then using the nm command to display symbols being exported and imported.

```cmd
g++ -c output.cpp
nm output.o

```
```
# What is Name Mangling in C++?
Name Mangling is the process of modifying function names into unique names by the compiler to support function overloading and namespaces in C++.
```

As the function names are not mangled due to the use of extern "C", we had to use different function names for printing: printSumInt and printSumFloat so that they seem different from each other while exporting.
```txt
         U _Float_Sum
         U _Int_Sum
00000084 T _printSumFloat
00000000 T _printSumInt
```
Till now, we have only compiled the source code file into an object file but have yet to link them. Without linking the object files, the linker will stop with a "missing symbol" error.

We have created an ```output.hpp header``` file (.hpp files can be imported in both C and C++) to declare printing functions: printSumInt and printSumFloat.

```c++
//output.hpp header file
extern "C" {
	void printSumInt(int a, int b);
	void printSumFloat(float a, float b);
} 
```

To get the results by calling appropriate function names, we have to link all the files with another created result.cpp file.

```c++
#include "output.hpp" // Importing output.hpp file to use printSumInt and printSumFloat functions.

int main(){
    printSumInt(1, 2); // Prints: 1 + 2: 3 by calling printSumInt function.
    printSumFloat(1.5f, 2.5f); // Prints: 1.5 + 2.5: 4.0 by calling printSumFloat function.
    return 0;
}
```
To generate the object file `result.o` for the source code file result.cpp and to check for imported & exported symbols, we have to run the below commands:


```cmd
g++ -c result.cpp
nm result.o 
```

Main function name has not been mangled despite not using extern "C", just because it is treated as a special implementation-defined function in C++.

```txt
0000000000000000 b .bss
0000000000000000 d .data
0000000000000000 p .pdata
0000000000000000 r .rdata
0000000000000000 r .rdata$zzz
0000000000000000 t .text
0000000000000000 r .xdata
                 U __main
0000000000000000 T main
                 U printSumFloat
                 U printSumInt
```
To link all the object files together to generate an executable file, we will use C++ linker (g++) and run the below command:

```cmd
g++ -c sum.cpp -o sum.o
g++ -c output.cpp -o output.o
g++ -c result.cpp -o result.o
```
```cmd
g++ -o output_generated sum.o output.o result.o
```

Here, output_generated is the name given to the executable file after linking all the object files: sum.o, output.o, and result.o.

Final Output: (After executing output_generated file)
```txt
1 + 2: 3
1.5 + 2.5: 4
```


