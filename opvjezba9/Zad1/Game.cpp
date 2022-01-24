
#include "Game.hpp"

bool Game::check_gameover(Player* p)
{
	for (int i = 0;i < (HumanPlayers + ComputerPlayers);++i)
	{
		if (p[i].Score == Points)
		{
			cout << "Player " << i << " won";
			return true;
		}
	}
	return false;
}


void Game::calculate(Player p)
{
	Total += p.Hand;
}

void Game::winner(Player& p)
{
	if (p.Guess == Total)
		p.Score += 1;
}

