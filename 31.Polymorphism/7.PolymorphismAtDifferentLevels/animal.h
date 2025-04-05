#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
#include <string>
#include <string_view>
#include <iostream>

class Animal
{
public:
    Animal() = default;
    Animal(string_view description);
    virtual ~Animal();
    
    virtual void breathe()const{
        cout << "Animal::breathe called for : " << m_description << endl;
    }
    
protected: 
    string m_description;
};

#endif // ANIMAL_H
