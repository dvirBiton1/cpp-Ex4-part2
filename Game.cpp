#include "Game.hpp"
namespace coup{
    vector<string> Game::players()
    {
        return this->playersList;
    }
    string Game::turn()
    {
        if (this->playersList.size() == 0)
        {
            throw runtime_error("their is no players in this game");
        }
        i = i % playersList.size();
        return this->playersList[this->i];
    }
    string Game::winner()
    {
        if (this->playersList.size() != 1)
        {
            throw runtime_error("their is no players in this game");
        }
        i = i % playersList.size();
        return this->playersList[this->i];
    }
    void Game::addPlayer(string name){
        this->playersList.push_back(name);
    }
    Game::Game(/* args */)
    {
        this->i = 0;
    }

    Game::~Game()
    {
    }
}