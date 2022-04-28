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
    void Player::coup(Player &p){
        isMyTurn();
        if (this->money < 7)
        {
            throw runtime_error("this Player havn't engoth money");
        }
        p.isAlive = false;
        money -= 7;
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
        if (this->lastAction.compare("foreign_aid") == 0)
        {
            this->money -= 2;
        }
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