
#include "ComputerPlayer.hpp"

void ComputerPlayer::set_random(Game g)
{
	int array[] = { 0, 1, 2, 5, 3, 6, 7, 8 };
	int r = rand() % 4;
	Hand = array[r];
	srand(time(NULL));
	Guess = Hand + rand() % ((g.HumanPlayers + g.ComputerPlayers) - Hand + 1);
	cout << endl;
	cout << "Hand " << Hand;
	cout << "Guess " << Hand;
}