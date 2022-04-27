#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <algorithm>
// #include "Player.hpp"
#pragma once
using namespace std;

namespace coup
{
    class Player;
    class Game
    {
    private:
        vector<string> playersList;

    public:
        // vector<string> playersList;
        unsigned int i;
        Game(/* args */);
        // {
        //     this->i = 0;
        // };
        vector<string> players();
        void addPlayer(string name);
        string turn();
        string winner();
        // void addPlayer(player p);
        ~Game();
    };
    
} // namespace coup
