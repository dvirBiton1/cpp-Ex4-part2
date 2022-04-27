
#include "Game.hpp"
#include <string>
#pragma once
using namespace std;
namespace coup{
    class Game;
    class Player
    {
    private:
        string name;
        int money;
        Game *game;
    public:
        Player(Game& game, string name);//{
        //     this->game = game;
        //     this->name = name;
        //     this->money = 0;
        // };
        void income();
        void foreign_aid();
        void coup(Player &p);
        void role();
        int coins();
        ~Player();
    };
    
}