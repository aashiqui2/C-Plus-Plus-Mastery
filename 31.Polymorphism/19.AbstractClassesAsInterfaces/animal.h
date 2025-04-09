#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <string_view>
#include <iostream>
#include "stream_insertable.h"

class Animal :public StreamInsertable
{
public:
    Animal() = default;
    Animal(const string& description);
    ~Animal();
    
    virtual void breathe()const{
        cout << "Animal::breathe called for : " << m_description << endl;
    }
    
    //Stream insertable interface
     virtual void stream_insert(ostream& out)const override{
         out << "Animal [description : " << m_description <<"]" ;
     }
    
protected: 
    string m_description;
};

#endif // ANIMAL_H
