#include "Player.hpp"
#include "Game.hpp"
// #include <string>
// #include <stdexcept>
using namespace std;

namespace coup
{

    void Player::income()
    {
        isMyTurn();
        this->money++;
        this->endMyTurn("income");
    }
    void Player::foreign_aid()
    {
        isMyTurn();
        this->money += 2;
        this->endMyTurn("foreign_aid");
    }
    void Player::coup(Player &p)
    {
    isMyTurn();
    for (unsigned int i = 0; i < this->game->players().size(); i++)
    {
        if (!p.name.compare(this->game->players()[i]))
        {
            this->game->players().erase(this->game->players().begin() + i);
            return;
        }
    }
    throw invalid_argument("this player didn't exsict");
    this->endMyTurn("coup");
    }
    void Player::role()
    {
        cout << "virtual";
    }
    int Player::coins()
    {
        return this->money;
    }

    void Player::isMyTurn(){
        // cout << game->turn() << "turn now\n";
        if (this->name.compare(game->turn()))
        {
            throw runtime_error(this->name + " is not your turn!");
        }
        
    }
    void Player::someOneBlockme(){
        
            throw invalid_argument("you cant block this action");
    }
    void Player::endMyTurn(string last){
        this->lastAction = last;
        this->game->nextTurn();
    }
    Player::Player(Game &game, string name)
    {
        // game.addPlayer(this);
        this->name = name;
        this->game = &game;
        this->isAlive = 1;
        this->game->addPlayer(this);
        this->money = 0;
    }
    Player::~Player()
    {
    }
}