#include <cstddef>
#include <iostream>

using namespace std;

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

int intersect(pravokutnik*& p, const kruznica& k, int n);
void min_max(unsigned* niz, int n, unsigned& max, unsigned& min);
int& vraca(int* niz, int i);