#pragma once
#include "Player.hpp"
#include "Game.hpp"

class HumanPlayer : public Player
{
public:
	void coins();
	void guess(Game g);
};