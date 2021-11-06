#include "vector.hpp"

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


// 2. ZADATAK

int& vraca(int* niz, int i)
{
	return niz[i];
}


//3. ZADATAK

int intersect(pravokutnik*& p, const kruznica& k, int n)
{
	int br = 0;
	int i;
	for (i = 0; i < n; ++i)
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


//4. ZADATAK

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