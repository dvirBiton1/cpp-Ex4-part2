#include "Player.hpp"
// #include "Game.hpp"
using namespace std;
namespace coup{
    class Assassin : public Player
    {
    private:
        /* data */
    public:
        Assassin(Game &game, string name);
        // int coinsduck();
        void block(Player &p);
        void role();
        ~Assassin();
    };
}