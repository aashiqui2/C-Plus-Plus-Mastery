#ifndef DOG_H
#define DOG_H
#include "feline.h"
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(const string& fur_style, const string& description);
    ~Dog();
    
    virtual void bark() const{
        cout << "Dog::bark called : Woof!" << endl;
    }
    
    virtual void stream_insert(ostream& out)const override{
         out << "Dog [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }

};

#endif // DOG_H
