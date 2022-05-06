#include "Player.hpp"

using namespace std;
namespace coup{
    class Captain : public Player
    {
    private:
    
    int howMany;
    Player *pFrom;
    public:
        Captain(Game &game, string name);
        void block(Player &p);
        void someOneBlockme();
        void steal(Player &p);
        string role();
        ~Captain();
    };


}