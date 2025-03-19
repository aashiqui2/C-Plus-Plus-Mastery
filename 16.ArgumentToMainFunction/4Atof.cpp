#include <iostream>
#include <cstdlib>  // For atof()

using namespace std;

int main() {
    const char* str1 = "123.45";
    const char* str2 = "56.78abc";  // Contains non-numeric characters
    const char* str3 = "abc123";    // Starts with non-numeric characters

    double num1 = atof(str1);
    double num2 = atof(str2);
    double num3 = atof(str3);

    cout << "String: " << str1 << " -> Number: " << num1 << endl;  // 123.45
    cout << "String: " << str2 << " -> Number: " << num2 << endl;  // 56.78 (stops at 'a')
    cout << "String: " << str3 << " -> Number: " << num3 << endl;  // 0.0 (invalid number)

    return 0;
}
