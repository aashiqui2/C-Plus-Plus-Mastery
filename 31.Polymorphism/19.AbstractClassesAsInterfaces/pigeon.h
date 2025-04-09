#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"
class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(const string& wing_color, const string& description);
    ~Pigeon();
    
    virtual void coo() const{
        cout << "Pigeon::coo called for pigeon : " << m_description << endl;
    }
    
    virtual void stream_insert(ostream& out)const override{
         out << "Pigeon [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }

};

#endif // PIGEON_H
