#include "Assassin.hpp"
namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
    }

    Assassin::~Assassin()
    {
    }
    void Assassin::role(){
        cout<<"Assassin"<<endl;
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
        if (this->money < 3)
        {
            throw runtime_error("this Assassin havn't engoth money");
        }
        p.isAlive = false;
        this->mordechaiTraget = &p;
        money -= 3;
        this->endMyTurn("kill");

    }
        

}