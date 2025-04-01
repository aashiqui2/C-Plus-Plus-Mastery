#include <iostream>
using namespace std;
int max(int *a, int *b)
{
   cout << "max with int* called" <<endl;
    return (*a > *b) ? *a : *b;
}

int max(const int *a, const int *b)
{
   cout << "max with cont int* called" <<endl;
    return (*a > *b) ? *a : *b;
}
/* 
int min(const int *a, const int *b)
{
    return (*a < *b) ? *a : *b;
} */  //Ambigious call

int min(const int *const a, const int *const b)
{
   cout << "&a : " << &a <<endl;
   cout << "&b : " << &b <<endl;
    return (*a < *b) ? *a : *b;
}

int main()
{

    /*
        int a{10};
        int b{12};

        const int c{30};
        const int d{15};

        auto result = max(&c,&c);
        */

    const int c{30};
    const int d{15};

    const int *p_c{&c};
    const int *p_d{&d};

   cout << "&p_c : " << &p_c <<endl;
   cout << "&p_d : " << &p_d <<endl;

    auto result = min(p_c, p_d);

    return 0;
}