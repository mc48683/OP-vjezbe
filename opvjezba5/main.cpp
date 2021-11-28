
#include "header.hpp"


int main()
{
	//int a, b;
	unsigned hit_miss;
	//position point1;
	//position point2;
	//point1.set_0();
	//cout << "Enter interval:" << endl;
	//cin >> a >> b;
	//point.set_rand(a, b);
	//cout << "Array elements are:\n" << point.x << "\t" << point.y << "\t" << point.z << endl;
	//cout << "Enter coordinates of first point:" << endl;
	//point1.get();
	//cout << "Enter coordinates of second point:" << endl;
	//point2.get();
	//cout << "Distance between two points in 2D space: " << point1.dva_d(point1, point2) << endl;
	//cout << "Distance between two points in 3D space: " << point1.tri_d(point1, point2);
	hit_miss = target_hit();
	cout << "Targets hit:" << hit_miss;
	return 0;

}

