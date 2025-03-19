#include <iostream>
#include "player.h"
int main()
{
    Player p1("football","manendraSingh","dhoni");
    cout<<p1.get_first_name()<<endl;
    cout<<p1.get_last_name()<<endl;
    cout<<p1<<endl;

    Person p2;
    cout<<p2<<endl;
    return 0;
}
