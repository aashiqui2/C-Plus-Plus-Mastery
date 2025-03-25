#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// Function with const string&
void greetConstStringRef(const string &name)
{
    cout << "Hello (const string&): " << name << endl;
    string sub = name.substr(0, 3); // New allocation
    cout << "First 3 chars (const string&): " << sub << endl;
}

// Function with string_view
void greetStringView(string_view name_sv)
{
    cout << "Hello (string_view): " << name_sv << endl;
    cout << "First 3 chars (string_view): " << name_sv.substr(0, 3) << endl;  // No extra allocation
}

int main()
{
    string name = "Alice";

    greetConstStringRef(name); // ✅ Works
    greetStringView(name);     // ✅ Works

    greetConstStringRef("Bob"); // ❌ ERROR (string literal not allowed)
    greetStringView("Bob");     // ✅ Works (string_view accepts literals)

    return 0;
}
