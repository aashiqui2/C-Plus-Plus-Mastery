#include <iostream>
#include "player.h"
int main()
{
    Player p1("cricket");
    // cout<<p1.get_first_name()<<endl;
    // cout<<p1.get_last_name()<<endl;
    p1.set_first_name("john");
    p1.set_last_name("cena");
    // cout<<p1.get_first_name()<<endl;
    // cout<<p1.get_last_name()<<endl;

    cout << p1;

    Person p2;
    cout << p2;
    return 0;
}