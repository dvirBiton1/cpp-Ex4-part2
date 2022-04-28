#include "Ambassador.hpp"
namespace coup{
    Ambassador::Ambassador(Game &game, string name) : Player(game,name)
    {
    }
    
    Ambassador::~Ambassador()
    {
    }
    void Ambassador::transfer(Player &p1, Player &p2){
        isMyTurn();
        if (p1.money <= 0)
        {
            throw runtime_error("pFrom haven't engoth money");
        }
        p1.money--;
        p2.money++;
        endMyTurn("transfer");
    }
    void Ambassador::role(){
        cout<<"Ambassador"<<endl;
    }
    void Ambassador::block(Player &p){
        if (p.lastAction.compare("steal") == 0)
        {
            p.someOneBlockme();
        }
        else{
            throw invalid_argument("you can't block this action");  
        }
        
    }
}