#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;
// using namespace coup;

TEST_CASE("Good input")
{
    Game game_1{};

	/* This player drew the "Duke" card, his name is Moshe
	and he is a player in game_1 */
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
	CHECK(game_1.turn() == "Moshe");
	CHECK(duke.coins() == 0);
	CHECK_NOTHROW(duke.income());
	CHECK(duke.coins() == 1);
	CHECK(game_1.turn() == "Yossi");
	CHECK(assassin.coins() == 0);
	CHECK_NOTHROW(assassin.income());
	CHECK(assassin.coins() == 1);
	CHECK(game_1.turn() == "Meirav");
	CHECK(ambassador.coins() == 0);
	CHECK_NOTHROW(ambassador.income());
	CHECK(ambassador.coins() == 1);
	CHECK(game_1.turn() == "Reut");
	CHECK(captain.coins() == 0);
	CHECK_NOTHROW(captain.income());
	CHECK(captain.coins() == 1);
	CHECK(game_1.turn() == "Gilad");
	CHECK(contessa.coins() == 0);
	CHECK_NOTHROW(contessa.income());
	CHECK(contessa.coins() == 1);
	CHECK(game_1.turn() == "Moshe");
	CHECK(duke.coins() == 1);
	CHECK_NOTHROW(duke.foreign_aid());
	CHECK(duke.coins() == 3);
	CHECK(game_1.turn() == "Yossi");
	CHECK(assassin.coins() == 1);
	CHECK_NOTHROW(assassin.foreign_aid());
	CHECK(assassin.coins() == 3);
	CHECK(game_1.turn() == "Meirav");
	CHECK(ambassador.coins() == 1);
	CHECK_NOTHROW(ambassador.foreign_aid());
	CHECK(ambassador.coins() == 3);
}