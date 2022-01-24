#pragma once
#include "Player.hpp"
#include "Game.hpp"

class ComputerPlayer : public Player
{
public:
	void set_random(Game g);
};
