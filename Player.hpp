#pragma once
#include "Game.hpp"
#include <string>
using namespace std;
namespace coup{
    class Game;
    class Player
    {   
    protected:
        
        int money;
        Game *game;
        
    public:
        string name;
        bool isAlive;
        string lastAction;
        Player(Game& game, string name);//{
        //     this->game = game;
        //     this->name = name;
        //     this->money = 0;
        // };
        void income();
        void foreign_aid();
        void coup(Player &p);
        virtual void role();
        int coins();
        void isMyTurn();
        void endMyTurn(string last);
        void someOneBlockme();
        ~Player();
    };
    
}