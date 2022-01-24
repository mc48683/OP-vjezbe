/*1. Napravite igru Japane�a za vi�e igra�a. U igri svaki igra� ima tri kovanice,
od 1, 2 i 5 kuna. U svakoj ruci odabire od nula do tri kovanice i poga�a zbroj
odabranih kovanica u rukama svih igra�a. Igra�i koji pogode zbroj dobiju po
jedan bod. Igra� mo�e biti �ovjek ili kompjuter. Igra se igra dok jedan od
igra�a ne postigne unaprijed zadani broj bodova.
Klase koje trebate definirati:
� Game, zadu�ena za logiku igre
� Player, predstavlja igra�a. Iz te klase izvedite dvije klase: HumanPlayer
i ComputerPlayer.*/
#include "Game.hpp"
#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"



int main()
{
	Game japaneza;
	//cout << "How many players do you want?";
	japaneza.HumanPlayers = 3;
	japaneza.ComputerPlayers = 0;
	const int n = 0;
	const int m = 3;

	
	HumanPlayer human[m];
	ComputerPlayer computer[1];
	while ((japaneza.check_gameover(human) == false) && (japaneza.check_gameover(computer) == false))
	{
		for (int i = 0;i<m;++i)
		{
			cout << "Player " << i << endl;
			human[i].coins();
			human[i].guess(japaneza);
			japaneza.calculate(human[i]);
		}
		
		for (int i = 0;i < n;++i)
		{
			computer[i].set_random(japaneza);
			japaneza.calculate(computer[i]);
		}
		
		cout << "Total sum was: " << japaneza.Total << endl;
		for (int i = 0;i < m; ++i)
		{
			japaneza.winner(human[i]);
			cout << "Player " << i << " score: " << human[i].Score << endl;
		}
		japaneza.Total = 0;
		cout << endl;
		
		for (int i = 0;i < n; ++i)
		{
			japaneza.winner(computer[i]);
			cout << "Player " << i << " score: " << computer[i].Score << endl;
		}
		
	}
	return 0;
}

/*
Definirajte interface Zivotinja sa metodama koje vra�aju broj nogu te vrstu
(string).Izvedite klase �ivotinja : Kukac, Pauk, Ptica, te iz njih neke klase
za konkretne �ivotinje.Napi�ite klasu Brojac koja prima �ivotinje(ispisuje
	vrstu svake dodane) i ra�una ukupan broj nogu svih �ivotinja.
	U glavnom programu napravite nekoliko �ivotinja, po�aljite ih broja�u i ispi�ite ukupan broj nogu.
	- primjer ispisa :
dodan: tarantula
dodan : zohar
dodan : vrabac
ukupno nogu : 16


class Animal
{
public:
	virtual int legs() = 0;
	virtual string species() = 0;
};

class Counter
{
public:
	int total_legs = 0;
	void get_animal(Animal &animal)
	{
		cout << "Added : " << animal.species() << endl;
		total_legs += animal.legs();
	}
	void print_total_legs()
	{
		cout << "Total number of legs : " << total_legs;
	}
};

class Insect : public Animal
{
public:
	int legs()
	{
		return 6;
	}
	string species()
	{
		return "Insect";
	}
};

class Spider : public Animal
{
public:
	int legs()
	{
		return 8;
	}
	string species()
	{
		return "Spider";
	}
};

class Bird : public Animal
{
public:
	int legs()
	{
		return 2;
	}
	string species()
	{
		return "Bird";
	}
};

class Tarantula : public Spider
{
public:
	int legs()
	{
		return 8;
	}
	string species()
	{
		return "tarantula";
	}
};

class Black_Widow : public Spider
{
public:
	int legs()
	{
		return 8;
	}
	string species()
	{
		return "black widow";
	}
};

class Jumping_Spider : public Spider
{
public:
	int legs()
	{
		return 8;
	}
	string species()
	{
		return "jumping spider";
	}
};

class Cockroach : public Insect
{
public:
	int legs()
	{
		return 6;
	}
	string species()
	{
		return "cockroach";
	}
};

class Bee : public Insect
{
public:
	int legs()
	{
		return 6;
	}
	string species()
	{
		return "bee";
	}
};

class Dragonfly : public Insect
{
public:
	int legs()
	{
		return 6;
	}
	string species()
	{
		return "dragonfly";
	}
};

class Sparrow : public Bird
{
public:
	int legs()
	{
		return 2;
	}
	string species()
	{
		return "sparrow";
	}
};

class Jackdaw : public Bird
{
public:
	int legs()
	{
		return 2;
	}
	string species()
	{
		return "jackdaw";
	}
};

class Raven : public Bird
{
public:
	int legs()
	{
		return 2;
	}
	string species()
	{
		return "raven";
	}
};

int main()
{
	Tarantula tarantula;
	Cockroach cockroach;
	Sparrow sparrow;
	Counter counter;
	counter.get_animal(tarantula);
	counter.get_animal(cockroach);
	counter.get_animal(sparrow);
	counter.print_total_legs();
	return 0;
}

*/