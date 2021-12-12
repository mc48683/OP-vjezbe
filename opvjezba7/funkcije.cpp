#include "header.hpp"
#include <iostream>

void Board::display()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}


void Board::draw_char(Point p, char ch)
{
	int m = p.x;
	int n = p.y;
	matrix[m][n] = ch;
}

void Board::draw_up_line(Point p, char ch)
{
	int m = p.x;
	int n = p.y;
	while (m > 0)
	{
		matrix[m][n] = ch;
		m--;
	}
}

void Board::draw_line(Point p1, Point p2, char ch)
{
	int m1 = p1.x;
	int n1 = p1.y;
	int m2 = p2.x;
	int n2 = p2.y;
	int i = m1, j = n1;
	matrix[m2][n2] = ch;
	while (m1 != m2 || n1 != n2)
	{
		matrix[i][j] = ch;
		if (m1 > m2) {

			i = ++m2;

			if (n1 > n2) j = ++n2;
			else if (n2 > n1) j = --n2;

		}
		else if (m2 > m1) {

			i = ++m1;

			if (n1 > n2) j = --n1;
			else if (n2 > n1) j = ++n1;

		}
		else
		{
			if (n1 > n2) j = --n1;
			else if (n2 > n1) j = ++n1;
		}
	}
}