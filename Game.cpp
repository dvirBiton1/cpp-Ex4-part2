#include "Game.hpp"
namespace coup{
    vector<string> Game::players()
    {
        vector<string> names;
        for(Player *p : playersList ){
            if (p->isAlive)
            {
                names.push_back(p->name);
            }  
        }
        return names;
    }
    string Game::turn()
    {
        if (this->playersList.size() == 0)
        {
            throw runtime_error("their is no players in this game");
        }
        // i = i % playersList.size();
        return this->playersList[i]->name;
    }
    string Game::winner()
    {
        if (this->players().size() != 1)
        {
            throw runtime_error("their is no winners in this game");
        }
        // i = i % playersList.size();
        return this->players().at(0);
    }
    void Game::addPlayer(Player *p){
        this->playersList.push_back(p);
    }
    void Game::nextTurn(){
        do
        {
           this->i = (this->i+1) % this->playersList.size();
        } while (this->playersList.at(i)->isAlive == false); 

    }
    Game::Game(/* args */)
    {
        this->i = 0;
    }

    Game::~Game()
    {
    }
}