Here’s an explanation with comments and details for each of the methods and functions you've listed:

---

### **Character Methods**:
1. **`isalnum()`**:  
   **Definition**: Returns `true` if all characters in the string are alphanumeric (letters or digits).  
   **Usage**:  
   ```cpp
   std::string str = "abc123";
   bool result = str.isalnum();  // Returns true
   ```
   **Return Value**: `true` if all characters are alphanumeric, otherwise `false`.

2. **`isalpha()`**:  
   **Definition**: Returns `true` if all characters in the string are alphabetic.  
   **Usage**:  
   ```cpp
   std::string str = "abc";
   bool result = str.isalpha();  // Returns true
   ```
   **Return Value**: `true` if all characters are alphabetic, otherwise `false`.

3. **`isblank()`**:  
   **Definition**: Returns `true` if the string consists only of blank spaces (spaces or tabs).  
   **Usage**:  
   ```cpp
   std::string str = "   ";
   bool result = str.isblank();  // Returns true
   ```
   **Return Value**: `true` if the string contains only blanks, otherwise `false`.

4. **`islower()`**:  
   **Definition**: Returns `true` if all characters in the string are lowercase.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   bool result = str.islower();  // Returns true
   ```
   **Return Value**: `true` if all characters are lowercase, otherwise `false`.

5. **`isupper()`**:  
   **Definition**: Returns `true` if all characters in the string are uppercase.  
   **Usage**:  
   ```cpp
   std::string str = "HELLO";
   bool result = str.isupper();  // Returns true
   ```
   **Return Value**: `true` if all characters are uppercase, otherwise `false`.

6. **`tolower()`**:  
   **Definition**: Converts all characters in the string to lowercase.  
   **Usage**:  
   ```cpp
   std::string str = "HELLO";
   std::string result = str.tolower();  // "hello"
   ```
   **Return Value**: A new string with all characters converted to lowercase.

7. **`toupper()`**:  
   **Definition**: Converts all characters in the string to uppercase.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   std::string result = str.toupper();  // "HELLO"
   ```
   **Return Value**: A new string with all characters converted to uppercase.

---

### **String Manipulation Methods**:
1. **`strlen()`**:  
   **Definition**: Returns the length of the C-style string (excluding the null terminator).  
   **Usage**:  
   ```cpp
   const char* str = "hello";
   size_t len = strlen(str);  // 5
   ```
   **Return Value**: The length of the string.

2. **`strcmp()`**:  
   **Definition**: Compares two C-style strings. Returns `0` if they are equal.  
   **Usage**:  
   ```cpp
   const char* str1 = "hello";
   const char* str2 = "world";
   int result = strcmp(str1, str2);  // Negative value (str1 < str2)
   ```
   **Return Value**: `0` if the strings are equal, a negative number if the first string is less than the second, and a positive number if the first string is greater.

3. **`strncmp()`**:  
   **Definition**: Compares the first `n` characters of two C-style strings.  
   **Usage**:  
   ```cpp
   const char* str1 = "hello";
   const char* str2 = "heLLO";
   int result = strncmp(str1, str2, 3);  // 0 (because first 3 characters are equal)
   ```
   **Return Value**: Same as `strcmp()`, but compares only the first `n` characters.

4. **`strchr()`**:  
   **Definition**: Finds the first occurrence of a character in a C-style string.  
   **Usage**:  
   ```cpp
   const char* str = "hello";
   const char* result = strchr(str, 'e');  // Points to the first 'e'
   ```
   **Return Value**: Pointer to the first occurrence of the character, or `NULL` if not found.

5. **`strrchr()`**:  
   **Definition**: Finds the last occurrence of a character in a C-style string.  
   **Usage**:  
   ```cpp
   const char* str = "hello";
   const char* result = strrchr(str, 'l');  // Points to the last 'l'
   ```
   **Return Value**: Pointer to the last occurrence of the character, or `NULL` if not found.

---

### **String Concatenation**:
1. **`strcat()`**:  
   **Definition**: Concatenates one C-style string to another.  
   **Usage**:  
   ```cpp
   char str1[20] = "hello";
   char str2[] = " world";
   strcat(str1, str2);  // "hello world"
   ```
   **Return Value**: The concatenated string (modifies `str1`).

2. **`strncat()`**:  
   **Definition**: Concatenates the first `n` characters of a C-style string to another.  
   **Usage**:  
   ```cpp
   char str1[20] = "hello";
   char str2[] = " world";
   strncat(str1, str2, 3);  // "hello wor"
   ```
   **Return Value**: The concatenated string (modifies `str1`).

3. **`strcpy()`**:  
   **Definition**: Copies a C-style string into another.  
   **Usage**:  
   ```cpp
   char str1[20];
   char str2[] = "hello";
   strcpy(str1, str2);  // "hello"
   ```
   **Return Value**: The destination string (`str1`).

4. **`strncpy()`**:  
   **Definition**: Copies the first `n` characters of a C-style string to another.  
   **Usage**:  
   ```cpp
   char str1[20];
   char str2[] = "hello";
   strncpy(str1, str2, 3);  // "hel"
   ```
   **Return Value**: The destination string (`str1`).

---

### **String Access Method**:
1. **`str.size()`**:  
   **Definition**: Returns the number of characters in the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   size_t length = str.size();  // 5
   ```
   **Return Value**: The number of characters in the string.

2. **`str.at()`**:  
   **Definition**: Returns a reference to the character at the specified position. Throws an exception if the position is out of range.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   char ch = str.at(1);  // 'e'
   ```
   **Return Value**: The character at the given position.

3. **`str.front()`**:  
   **Definition**: Returns a reference to the first character of the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   char ch = str.front();  // 'h'
   ```
   **Return Value**: The first character.

4. **`str.back()`**:  
   **Definition**: Returns a reference to the last character of the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   char ch = str.back();  // 'o'
   ```
   **Return Value**: The last character.

5. **`str.c_str()`**:  
   **Definition**: Returns a pointer to a null-terminated C-style string representing the current string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   const char* c_str = str.c_str();  // "hello"
   ```
   **Return Value**: A pointer to a null-terminated C-style string.

6. **`str.data()`**:  
   **Definition**: Returns a pointer to the underlying array of characters, which may not be null-terminated.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   const char* data = str.data();  // "hello"
   ```
   **Return Value**: Pointer to the underlying character array.

---

### **String Capacity and Size**:
1. **`str.size()`**:  
   **Definition**: Returns the number of characters in the string (same as `str.length()`).  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   size_t size = str.size();  // 5
   ```
   **Return Value**: The number of characters.

2. **`str.empty()`**:  
   **Definition**: Returns `true` if the string is empty.  
   **Usage**:  
   ```cpp
   std::string str = "";
   bool result = str.empty();  // true
   ```
   **Return Value**: `true` if the string is empty, otherwise `false`.

3. **`str.length()`**:  
   **Definition**: Returns the number of characters in the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   size_t length = str.length();  // 5
   ```
   **Return Value**: The number of characters.

4. **`str.max_size()`**:  
   **Definition**: Returns the maximum possible number of characters the string can hold.  
   **Usage**:  
   ```cpp
   std::string str;
   size_t max_size = str.max_size();  // varies based on implementation
   ```
   **Return Value**: The maximum size.

5. **`str.capacity()`**:  
   **Definition**: Returns the number of characters the string can hold before needing to allocate more memory.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   size_t capacity = str.capacity();  // depends on string length and implementation
   ```
   **Return Value**: The string's capacity.

6. **`str.reserve()`**:  
   **Definition**: Requests that the string’s capacity be at least enough to hold `n` characters.  
   **Usage**:  
   ```cpp
   std::string str;
   str.reserve(50);  // Ensures capacity for at least 50 characters
   ```
   **Return Value**: None.

7. **`str.shrink_to_fit()`**:  
   **Definition**: Reduces the string’s capacity to fit its size.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.shrink_to_fit();  // Shrinks capacity to fit the current size
   ```
   **Return Value**: None.

---

### **Modifying String**:
1. **`str.clear()`**:  
   **Definition**: Clears the contents of the string, making it empty.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.clear();  // str is now empty
   ```
   **Return Value**: None.

2. **`str.insert()`**:  
   **Definition**: Inserts characters into the string at a specified position.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.insert(5, " world");  // "hello world"
   ```
   **Return Value**: The modified string.

3. **`str.erase()`**:  
   **Definition**: Removes characters from the string starting from a specified position.  
   **Usage**:  
   ```cpp
   std::string str = "hello world";
   str.erase(5, 6);  // "hello"
   ```
   **Return Value**: The modified string.

4. **`str.push_back()`**:  
   **Definition**: Adds a character to the end of the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.push_back('!');  // "hello!"
   ```
   **Return Value**: None.

5. **`str.pop_back()`**:  
   **Definition**: Removes the last character of the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.pop_back();  // "hell"
   ```
   **Return Value**: None.

6. **`str.append()`**:  
   **Definition**: Appends a string or a substring to the end of the current string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.append(" world");  // "hello world"
   ```
   **Return Value**: The modified string.

---

### **String Compare Method**:
1. **`str.compare()`**:  
   **Definition**: Compares two strings.  
   **Usage**:  
   ```cpp
   std::string str1 = "hello";
   std::string str2 = "world";
   int result = str1.compare(str2);  // Returns a negative value
   ```
   **Return Value**: `0` if equal, negative if `str1` is less, positive if `str1` is greater.

---

### **String Replace, Resize, Copying, Swapping**:
1. **`str.copy()`**:  
   **Definition**: Copies a substring to a character array.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   char arr[6];
   str.copy(arr, 5);  // Copies "hello" into arr
   ```
   **Return Value**: Number of characters copied.

2. **`str.resize()`**:  
   **Definition**: Resizes the string to a specified length.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.resize(8, '.');  // "hello..."
   ```
   **Return Value**: None.

3. **`str.replace()`**:  
   **Definition**: Replaces part of the string with another string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   str.replace(1, 2, "i");  // "hillo"
   ```
   **Return Value**: The modified string.

4. **`str.swap()`**:  
   **Definition**: Swaps the contents of two strings.  
   **Usage**:  
   ```cpp
   std::string str1 = "hello";
   std::string str2 = "world";
   str1.swap(str2);  // str1 becomes "world", str2 becomes "hello"
   ```
   **Return Value**: None.

---

### **String Searching Method**:
1. **`str.find()`**:  
   **Definition**: Finds the first occurrence of a substring or character in the string.  
   **Usage**:  
   ```cpp
   std::string str = "hello";
   size_t pos = str.find("l");  // 2
   ```
   **Return Value**: The index of the found character or substring, or `std::string::npos` if not found.

---

### **Transformation of String to/from Int**:
1. **`to_string()`**:  
   **Definition**: Converts an integer to a string.  
   **Usage**:  
   ```cpp
   int num = 123;
   std::string str = std::to_string(num);  // "123"
   ```
   **Return Value**: The string representation of the integer.

2. **`stoi()`**:  
   **Definition**: Converts a string to an integer.  
   **Usage**:  
   ```cpp
   std::string str = "123";
   int num = std::stoi(str);  // 123
   ```
   **Return Value**: The integer value of the string.

3. **`stol()`**:  
   **Definition**: Converts a string to a long integer.  
   **Usage**:  
   ```cpp
   std::string str = "12345";
   long num = std::stol(str);  // 12345
   ```
   **Return Value**: The long integer value of the string.

4. **`stoll()`**:  
   **Definition**: Converts a string to a long long integer.  
   **Usage**:  
   ```cpp
   std::string str = "123456789";
   long long num = std::stoll(str);  // 123456789
   ```
   **Return Value**: The long long integer value of the string.

5. **`stoul()`**:  
   **Definition**: Converts a string to an unsigned long integer.  
   **Usage**:  
   ```cpp
   std::string str = "12345";
   unsigned long num = std::stoul(str);  // 12345
   ```
   **Return Value**: The unsigned long integer value of the string.

6. **`stoull()`**:  
   **Definition**: Converts a string to an unsigned long long integer.  
   **Usage**:  
   ```cpp
   std::string str = "123456789";
   unsigned long long num = std::stoull(str);  // 123456789
   ```
   **Return Value**: The unsigned long long integer value of the string.

7. **`stof()`**:  
   **Definition**: Converts a string to a float.  
   **Usage**:  
   ```cpp
   std::string str = "12.34";
   float num = std::stof(str);  // 12.34
   ```
   **Return Value**: The float value of the string.

8. **`stod()`**:  
   **Definition**: Converts a string to a double.  
   **Usage**:  
   ```cpp
   std::string str = "12.34";
   double num = std::stod(str);  // 12.34
   ```
   **Return Value**: The double value of the string.

9. **`stold()`**:  
