#include "HumanPlayer.hpp"

void HumanPlayer::coins()
{
	int coin;
	cout << "Enter sum of coins you want: ";
	cin >> coin;
	while ((coin != 0) && (coin != 1) && (coin != 2) && (coin != 5) && (coin != 3) && (coin != 6) && (coin != 7) && (coin != 8))
	{
		cout << "You entered the wrong sum, try again: ";
		cin >> coin;
	}
	Hand = coin;
}

void HumanPlayer::guess(Game g)
{
	int total;
	cout << "Guess what is the total sum of coins: ";
	cin >> total;
	cout << endl;
	while (total > ((g.HumanPlayers + g.ComputerPlayers) * 8))
	{
		cout << "You entered too big sum, try again: ";
	}
	Guess = total;

}
