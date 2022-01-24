#include "header.hpp"

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