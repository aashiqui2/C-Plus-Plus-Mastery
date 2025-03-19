#include "player.h"

Player::Player(string_view game_param, string_view first_name_param, string_view last_name_param)
{
    m_name = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}
ostream &operator<<(ostream &out, const Player &player)
{
    out << "Player : [ game : "  << player.m_name<< " names : " << player.get_first_name()<< " " << player.get_last_name() << "]";
    return out;
}