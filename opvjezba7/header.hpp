#include <iostream>
using namespace std;


typedef struct Point
{
	double x, y;
	Point(double a, double b)
	{
		x = a;
		y = b;
	}

}Point;

class Board
{
public:
	char** matrix;
	double row, col;
	char edge;
	Board() = default;
	Board(double a, double b)
	{
		edge = 'o';
		row = a;
		col = b;
		matrix = new char* [row];
		for (int i = 0; i < row; i++)
			matrix[i] = new char[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if ((i == 0) || (j == 0) || (i == row - 1) || (j == col - 1))
					matrix[i][j] = edge;
				else
					matrix[i][j] = ' ';
			}
		}
	}
	Board(const Board& other)
	{
		row = other.row;
		col = other.col;
	}
	Board(Board&& other)
	{
		row = other.row;
		col = other.col;

		other.row = 0;
		other.col = 0;
	}
	~Board()
	{
		for (int i = 0;i < row;++i)
		{
			delete matrix[i];
		}
		delete matrix;
	}
	void draw_char(Point p, char ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point p1, Point p2, char ch);
	void display();
};

