#ifndef CROW_H
#define CROW_H
#include "bird.h"

class Crow : public Bird
{
public:
    Crow() = default;
    Crow(string_view wing_color, string_view description);
    virtual ~Crow();
    
    virtual void cow() const{
        cout << "Crow::cow called fro crow : " << m_description << endl;
    }
    
    //This will give a compiler error is fly is marked as final in Bird
    /*
    virtual void fly() const override{
        
    }
    */

};

#endif // CROW_H
