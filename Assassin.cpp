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
    void Assassin::block(Player &p){
        // need compleate
    }
    void Assassin::someOneBlockme(){
        if (this->lastAction.compare("foreign_aid") == 0)
        {
            this->money -= 2;
        }
        else if (this->lastAction.compare("coup") == 0)
        {
            this->money -= 2;
        }
        else{
            throw invalid_argument("you cant block this action");
        }
    }
        

}