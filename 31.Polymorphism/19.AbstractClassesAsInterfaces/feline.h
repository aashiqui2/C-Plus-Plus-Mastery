#ifndef FELINE_H
#define FELINE_H
#include "animal.h"
class Feline : public Animal
{
public:
    Feline() = default;
    Feline(const string& fur_style, const string& description);
    ~Feline();
    
    virtual void run() const{
        cout << "Feline " << m_description << " is running" << endl;
    }
    
    //Stream insertable interface
     virtual void stream_insert(ostream& out)const override{
         out << "Feline [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }
    string m_fur_style;
};

#endif // FELINE_H
