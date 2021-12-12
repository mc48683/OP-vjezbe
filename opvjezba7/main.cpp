#include "header.hpp"
#include <iostream>
using namespace std;


int main()
{
	Board b(10, 20);
	//Board b2(b);
	Point p1(2, 2);
	Point p2(8, 8);
	
	//b.draw_char(p, 'x');
	//b.draw_up_line(p, 'x');
	b.draw_line(p1,p2,'x');
	b.display();

	return 0;
}