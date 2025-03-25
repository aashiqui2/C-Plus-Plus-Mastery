#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Player : public Person
{
    friend ostream &operator<<(ostream &out, const Player &player);

public:
    Player();
    ~Player();
    void play()
    {
        m_fullname = "ashik";
        m_age = 25;
        // m_address="aijhdia"; private access
    }

private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int health_factor{0};
};
#endif