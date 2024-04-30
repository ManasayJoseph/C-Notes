
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"

class Player : public Person
{
    //* Friend keyword gives access to all members of Player class. (private included)
    friend std::ostream& operator<<(std::ostream& out, const Player& player); //* Player.cpp
public:
    Player() = default;
    Player(std::string_view game_param);
    
private : 
    std::string m_game{"None"};
};

#endif // PLAYER_H