#ifndef CAT_H
#define CAT_H
#include "feline.h"
class Cat : public Feline
{
public:
    Cat() = default;
    Cat(string_view fur_style, string_view description);
    virtual ~Cat();
    
    virtual void miaw() const{
        cout << "Cat::miaw() called for cat " << m_description << endl;
    }

    virtual void breathe()const{
        cout << "Cat::breathe called for : " << m_description << endl;
    }

    virtual void run() const override{
        cout << "Cat " << m_description << " is running" << endl;
    }


};

#endif // CAT_H
