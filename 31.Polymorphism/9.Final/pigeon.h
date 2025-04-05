#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"
class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(string_view wing_color, string_view description);
    virtual ~Pigeon();
    
    virtual void coo() const{
        cout << "Pigeon::coo called for pigeon : " << m_description << endl;
    }


};

#endif // PIGEON_H
