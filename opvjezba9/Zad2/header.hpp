
#include <iostream>
#include <string>
using namespace std;

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
	void get_animal(Animal& animal)
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
