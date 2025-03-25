# The Build Pipeline: Preprocess, Compile, and Link:
1. each C++ source code file needs to be compiled into an object file first, and then the linker links this object file into an executable file to execute & run. 

2. C++ source code files can contain various header files with the #include directive.
```c++
// Examples of header files used in C++ source code files with the #include directive.
#include <iostream>
#include <bits/stdc++.h>
```
3. The header files can have the extension .h, or even no extension is needed if we are using C++ standard library template.

4. The first step while translating the source code into machine-readable code is to pre-process the source code file. 

5. The header files included within the source code file are not passed directly to the compiler; only the main source code file is passed for pre-processing and compilation purposes.

6. Header files are then indirectly included from the source file itself, where the C++ pre-processor replaces the lines containing the #include directive with the actual content of the included header files.

7. When we want to compile multiple source code files, header files can be opened multiple times during the pre-processing phase, depending upon how many source code files include them. 

8. However, source code files are opened only once for pre-processing and compilation.

9. The other functionality of the pre-processor is to remove the code from the source code file upon finding the conditional compilation blocks (like if-else statements) whose value evaluates to false and is not needed in retrieving results from the code.

10. Pre-processor also helps in macro replacements. Macros in C++ usually start with the #define directive, and whenever the compiler encounters a macro name, it replaces the name with the definition of the Macro.

# Example 1:

 ```Assuming we have a source code file as hello.cpp and the below C++ code is present, we are now interested in obtaining translated unit (pre-processed source code file).  ```

 ```c++
 // hello.cpp file containing some C++ code ready for pre-processing.
#include <bits/stdc++.h> // Header file inclusion.
using namespace std;

int main() {
  cout << "hello" << endl; // prints "hello"
  return 0;
}
```

After opening the file path in command prompt, we need to run the below command:

``` cmd
g++ -E hello.cpp -o hello.ii // Command to pre-process .cpp file.
```

hello.ii is the name given to the pre-processed file that will be obtained.

```To check the number of lines present in the pre-processed file, we can run the below command:```

```cmd
wc -l hello.ii
```
### **Alternative Methods:**
#### **1. Using PowerShell**
Try this command in PowerShell:
```powershell
(Get-Content hello.ii).Count
```
This will display the number of lines in `hello.ii`.

#### **2. Using Windows Command Prompt (`cmd`)**
If you're using `cmd`, you can use `find /c /v ""`:
```cmd
find /c /v "" hello.ii
```
This will count the number of lines in the file.

#### **3. Using Git Bash or WSL**
If you have **Git Bash** or **Windows Subsystem for Linux (WSL)** installed, you can use:
```sh
wc -l hello.ii
```
### Output:
 As we can observe, the pre-processed file hello.ii contains 93,675 lines of code in the machine after including the header file content.

 Note that the pre-processed file becomes bigger as we keep including header files in the source code. After pre-processing, the compiler starts the compilation phase to produce an object file with an extension .o (Compiler has to compile a much larger file, i.e., translated unit compared to a short & simple source file).