#ifndef CROW_H
#define CROW_H
#include "bird.h"

class Crow : public Bird
{
public:
    Crow() = default;
    Crow(const string& wing_color, const string& description);
    ~Crow();
    
    virtual void cow() const{
        cout << "Crow::cow called fro crow : " << m_description << endl;
    }
    
    virtual void stream_insert(ostream& out)const override{
         out << "Crow [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }

};

#endif // CROW_H
