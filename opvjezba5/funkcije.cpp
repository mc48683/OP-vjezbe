#include "header.hpp"

void position::set_0()
{
	x = 0;
	y = 0;
	z = 0;
}

void position::set_rand(int a, int b)
{
	srand(time(NULL));
	x = a + rand() % (b - a + 1);
	y = a + rand() % (b - a + 1);
	z = a + rand() % (b - a + 1);
}

void position::get()
{
	cin >> x >> y >> z;
}

double position::dva_d(position& point1, position& point2)
{
	double d = sqrt(pow(point2.x - point1.x, 2.0) + pow(point2.y - point1.y, 2.0));
	return d;
}

double position::tri_d(position& point1, position& point2)
{
	double d = sqrt(pow(point2.x - point1.x, 2.0) + pow(point2.y - point1.y, 2.0) + pow(point2.z - point1.z, 2.0));
	return d;
}


void weapon::shoot()
{
	if (curr_bullet > 0)
		curr_bullet--;
}

void weapon::reload()
{
	if (curr_bullet < max_bullet)
		curr_bullet++;
}

unsigned target_hit()
{
	int n;
	unsigned hit;
	cout << "Enter number of targets:" << endl;
	cin >> n;
	target* targets = new target[n * 2];
	target hit_miss;
	srand(time(NULL));
	for (int i = 0;i <= n;++i)
	{
		targets[i].x1 = (rand() % 10) + 1;
		targets[i].y1 = (rand() % 10) + 1;
		targets[i].z1 = (rand() % 10) + 1;
		targets[i].x2 = (rand() % 10) + 1;
		targets[i].y2 = (rand() % 10) + 1;
		targets[i].z2 = (rand() % 10) + 1;
	}
	weapon revolver;
	revolver.curr_bullet = 6;
	revolver.x = (rand() % 10) + 1;
	revolver.y = (rand() % 10) + 1;
	revolver.z = (rand() % 10) + 1;
	int i = 0;
	while (revolver.curr_bullet > 0)
	{
		if (i == n)
			break;
		if ((revolver.z >= targets[i].z1) && (revolver.z <= targets[i].z2))
		{
			revolver.shoot();
			hit_miss.hit++;
			++i;
		}
		else
		{
			hit_miss.miss++;
			++i;
		}
	}
	delete[] targets;
	return hit_miss.hit;
}