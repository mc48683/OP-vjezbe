#include <iostream>
#include <time.h> 
#include <cmath>
#include <string>
using namespace std;

class position
{
public:
	double x, y, z;
	void set_0();
	void set_rand(int a, int b);
	void get();
	double dva_d(position& point1, position& point2);
	double tri_d(position& point1, position& point2);
};

class weapon
{
public:
	double x, y, z;
	unsigned max_bullet;
	unsigned curr_bullet;
	void shoot();
	void reload();
};

class target
{
public:
	double x1, y1, z1;
	double x2, y2, z2;
	unsigned hit = 0;
	unsigned miss = 0;
};

unsigned target_hit();
