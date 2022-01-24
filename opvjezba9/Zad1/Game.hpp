#pragma once
#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"


class Game
{
public:
	int HumanPlayers;
	int ComputerPlayers;
	int Total = 0;
	int Points = 2;
	bool check_gameover(Player* p);
	void calculate(Player p);
	void winner(Player& p);
};