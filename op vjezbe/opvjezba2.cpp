
#include <iostream>
using namespace std;

/*
//1. ZADATAK

void min_max(unsigned* niz, int n, unsigned& max, unsigned& min)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if (niz[i] > max)
			max = niz[i];
		if (niz[i] < min)
			min = niz[i];
	}
}
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


// 2. ZADATAK
// Napisati funkciju koja vraæa referencu na neki element niza. Koristeæi povratnu vrijednost funkcije kao lvalue uveæajte i-ti element niza za jedan.


int& vraca(int* niz, int i)
{
	return niz[i];
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


//3. ZADATAK
//Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
//pravokutnik èije su stranice paralelne sa osima apscisa i ordinata.Napisati
//funkciju koja prima niz pravokutnika i jednu kruznicu i vraæa broj pravokutnika koji sijeku kružnicu.Niz pravokutnika i kružnica šalju se u funkciju
//pomoæu const referenci.


struct tocka
{
	int x, y;
};

struct pravokutnik
{
	tocka a, b;
};

struct kruznica
{
	tocka s;
	int r;
};


int intersect(pravokutnik* p,kruznica* k,int n)
{
	int br = 0;
	int i;
	for (i = 0;i < n;++i)
	{
		int mx = max(p[i].a.x, min(k.s.x, p[i].b.x));
		int my = max(p[i].a.y, min(k.s.y, p[i].b.y));
		int nx = mx - (k.s.x);
		int ny = my - (k.s.y);
		if ((nx * nx + ny * ny) <= (k.r * k.r))
			br++;
	}
	return br;

}



int main()
{
	int n,i,x;
	cout << "Unesite broj pravokutnika:" << "\n";
	cin >> n;
	pravokutnik* p = new pravokutnik[n];
	for (i = 0;i < n;++i)
	{
		cout << "Unesite tocke pravokutnika:" << "\n";
		cin >> p[i].a.x >> p[i].a.y >> p[i].b.x >> p[i].a.x;	
	}
	kruznica* k;
	k.s = { 2,1 };
	k.r = 1;
	x = intersect(p, k, n);
	cout << "Broj pravokutnika koji se sijeku s kruznicom je:" << x << endl;
	return 0;
}


/*
//4. ZADATAK

//Definirati strukturu koja opisuje vektor. Struktura se sastoji od niza int elemenata, 
// logièke i fizièke velièine niza.Fizièka velièina je inicijalno init, a
//kada se ta velièina napuni vrijednostima, alocira se duplo.
//Napisati funkcije vector_new, vector_delete, vector_push_back, vector_pop_back,
//vector_front, vector_back i vector_size.Funkcije su èlanovi strukture.

/*

#include <vector>
#include <iomanip>

using namespace std;

struct MyVector {
	int* arr;
	size_t size;
	size_t capacity;

	void vector_new(size_t capacity);
	void vector_push_back(size_t element);
	int& vector_front();
	int& vector_back();
	void print_vector();
	void vector_pop_back();
	size_t vector_size();
	size_t vector_capacity();
	void vector_delete();

};

void MyVector::vector_new(size_t capacity) 
{
	arr = new int[capacity];
}

void MyVector::vector_delete()
{
	delete[] arr;
}

void MyVector::vector_push_back(size_t n)
{
	if (size == capacity)
	{
		int* arr1 = arr;
		arr = new int[capacity = capacity * 2];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr1[i];
		}

		delete[] arr1;
	}
	arr[size] = n;
	size++; 
}



void MyVector::vector_pop_back()  
{
	size = size - 1;
}


int& MyVector::vector_front() 
{
	int prvi = arr[0];
	return prvi; 
}


int& MyVector::vector_back() 
{
	int zadnji = arr[size - 1];
	return zadnji; 
}

size_t MyVector::vector_size() 
{
	return size;
}

size_t MyVector::vector_capacity()
{
	return capacity;
}


void MyVector::print_vector()
{
	for (size_t i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

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