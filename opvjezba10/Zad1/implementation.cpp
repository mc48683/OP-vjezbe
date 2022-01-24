#include <iostream>
using namespace std;
template<typename T>
void sort(T arr[], int n)
{
	for (int i = 0;i < n - 1;++i)
	{
		for (int j = n - 1;i < j;--j)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

template<>
void sort<char>(char arr[], int n)
{
	for (int i = 0;i < n - 1;++i)
	{
		for (int j = n - 1;i < j;--j)
		{
			if (tolower(arr[j]) < tolower(arr[j - 1]))
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}