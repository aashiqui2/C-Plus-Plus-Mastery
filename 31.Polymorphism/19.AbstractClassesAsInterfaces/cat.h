#ifndef CAT_H
#define CAT_H
#include "feline.h"
class Cat : public Feline
{
public:
    Cat() = default;
    Cat(const string& fur_style, const string& description);
    ~Cat();
    
    virtual void miaw() const{
        cout << "Cat::miaw() called for cat " << m_description << endl;
    }
    
    virtual void stream_insert(ostream& out)const override{
         out << "Cat [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }


};

#endif // CAT_H
