#include "Person.h"  // Including Person.h again

class Student : public Person {
public:
    void show() {
        cout << "Hello from Student class!" << endl;
    }
};
