#include "Contessa.hpp"
namespace coup{
    Contessa::Contessa(Game &game, string name) : Player(game, name)
    {
    }
    
    Contessa::~Contessa()
    {
    }
    void Contessa::block(Player &p){
        if (p.lastAction.compare("kill") == 0)
        {
            p.someOneBlockme();
        }
        else{
            throw invalid_argument("you can't block this action");  
        }
    }
    string Contessa::role(){
        return "Contessa";
    }
}