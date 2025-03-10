#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char name[6];
    cout << "Enter the Name :";
    // cin >> name; // it cause buffer overflow
    // cout << "Your name is " << name << endl;

    // cin.get(name, sizeof(name));//5char +'\0' null terminator
    // cout << "Your name is " << name << endl;

    //! using setw()
    // cin>>setw(sizeof(name))>>name;
    // cout << "Your name is " << name<<endl;

    //! get multiple words
    // fgets(name,sizeof(name),stdin);
    // cout << "Your name is " << name<<endl;

    //! getline()
    // cin.getline(name,sizeof(name));
    // cout << "Your name is " << name<<endl;

    

    return 0;
}