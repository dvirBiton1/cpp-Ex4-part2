#include "Captain.hpp"
namespace coup
{
    Captain::Captain(Game &game, string name) : Player(game,name)
    {
    }

    Captain::~Captain()
    {
    }
    void Captain::block(Player &p){
        if (p.lastAction.compare("steal") == 0)
        {
            p.someOneBlockme();
        }
        else{
            throw invalid_argument("you can't block this action");  
        }
        
    }
    void Captain::someOneBlockme(){
        if (this->lastAction.compare("foreign_aid") == 0)
        {
            this->money -= 2;
        }
        else if (this->lastAction.compare("steal") == 0)
        {
            this->pFrom->money += 2;
            this->money -= 2;
        }
        else{
            throw invalid_argument("you cant block this action");
        }
    }
    void Captain::steal(Player &p){
        isMyTurn();
        if (p.money < 2)
        {
            throw runtime_error(" i dont have engoth money");
        }
        this->money += 2;
        p.money -= 2;
        endMyTurn("steal");
    }

    void Captain::role(){
        cout<<"Captain"<<endl;
    }
}