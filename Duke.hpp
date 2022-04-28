#include "Player.hpp"
// #include "Game.hpp"
using namespace std;
namespace coup{
    class Duke : public Player
    {
    private:
        /* data */
    public:
        Duke(Game &game, string name);
        // int coinsduck();
        void block(Player &p);
        void someOneBlockme();
        void role();
        void tax();
        ~Duke();
    };
}