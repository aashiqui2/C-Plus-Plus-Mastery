#ifndef BIRD_H
#define BIRD_H
#include "animal.h"
class Bird : public Animal
{
public:
    Bird() = default;
    Bird(const string& wing_color, const string& description);
    
    ~Bird();
    
    virtual void fly() const{
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }
    
    virtual void stream_insert(ostream& out)const override{
         out << "Bird [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }
    
protected : 
    string m_wing_color;
};

#endif // BIRD_H
