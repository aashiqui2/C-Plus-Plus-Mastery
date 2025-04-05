#ifndef BIRD_H
#define BIRD_H
#include "animal.h"
class Bird : public Animal
{
public:
    Bird() = default;
    Bird(string_view wing_color, string_view description);
    
    ~Bird();
    
    virtual void fly() const{
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }
    
private : 
    string m_wing_color;
};

#endif // BIRD_H
