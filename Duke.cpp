#include "Duke.hpp"
namespace coup
{
    Duke::Duke(Game &game, string name) : Player(game, name)
    {
    }

    Duke::~Duke()
    {
    }
    void Duke::block(Player &p){
        if (p.lastAction.compare("foreign_aid") == 0)
        {
            p.someOneBlockme();
        }
        else{
            throw invalid_argument("you can't block this action");  
        }
        
    }
    void Duke::tax(){
        isMyTurn();
        this->money += 3;
        this->endMyTurn("tax");
    }
    void Duke::role(){
        cout<<"duke"<<endl;
    }

}