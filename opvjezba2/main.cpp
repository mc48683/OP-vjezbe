
#include "vector.hpp"
#include <vector>

/*
int main()
{
	unsigned niz[] = { 1,5,8,2,13 };
	unsigned max = niz[0];
	unsigned min = niz[0];
	int n = sizeof(niz) / sizeof(niz[0]);
	min_max(niz, n, max, min);
	cout << "Najveci broj je " << max << endl;
	cout << "Najmanji broj je " << min << endl;
	return 0;

}


int main()
{
	int niz[] = { 3,1,4,2,5,11 };
	int i = 3;
	vraca(niz, i) = niz[i] + 1;
	cout << niz[i] << endl;
	return 0;

}
*/

int main()
{
	int n, i, x;
	cout << "Unesite broj pravokutnika:" << "\n";
	cin >> n;
	pravokutnik* p = new pravokutnik[n];
	for (i = 0; i < n; ++i)
	{
		cout << "Unesite tocke pravokutnika:" << "\n";
		cin >> p[i].a.x >> p[i].a.y >> p[i].b.x >> p[i].a.x;
	}
	kruznica  k;
	k.s = { 3,2 };
	k.r = 1;
	x = intersect(p, k, n);
	cout << "Broj pravokutnika koji se sijeku s kruznicom je:" << x << endl;
	return 0;
}

/*
int main()
{
	MyVector vektor;
	size_t n;
	cout << "Unesite capacity:" << endl;
	cin >> vektor.capacity;
	vektor.vector_new(vektor.capacity);
	cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
	vektor.size = 0;
	while (cin >> n)
		vektor.vector_push_back(n);
	cout << "END" << endl;
	vektor.print_vector();
	cout << "Unesite prvi element " << vektor.vector_front() << endl;
	cout << "Unesite zadnji element " << vektor.vector_back() << endl;
	cout << "Ukloni zadnji element" << endl;
	vektor.vector_pop_back();
	vektor.print_vector();

	cout << "size " << vektor.vector_size() << endl;
	cout << "capacity " << vektor.vector_capacity() << endl;

	vektor.vector_delete();

}
*/