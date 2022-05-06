#include "Assassin.hpp"
namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
    }

    Assassin::~Assassin()
    {
    }
    string Assassin::role(){
        return "Assassin";
    }
    void Assassin::someOneBlockme(){
        if (this->lastAction.compare("foreign_aid") == 0)
        {
            this->money -= 2;
        }
        else if (this->lastAction.compare("kill") == 0)
        {
            this->mordechaiTraget->isAlive = true;
        }
        else{
            throw invalid_argument("you cant block this action");
        }
    }
    void Assassin::coup(Player &p){
        isMyTurn();
        if (p.isAlive == false)
        {
            throw runtime_error("this player is dead!");
        }
        if (this->money < 3)
        {
            throw runtime_error("this Assassin havn't engoth money");
        }
        p.isAlive = false;
        this->mordechaiTraget = &p;
        if (this->money >= 7)
        {
            money -= 7;
            this->endMyTurn("coup");
        }
        else{
            money -= 3;
            this->endMyTurn("kill");
        }
    }
        

}