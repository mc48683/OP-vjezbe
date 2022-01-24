#include "header.hpp"
using namespace std;
int main()
{
	int arr[] = { 8,2,5,1,7 };
	char arr1[] = { 'Z', 'b', 'e','z','p','A' };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	sort<char>(arr1, n);
	for (int i = 0;i < n;++i)
	{
		cout << arr1[i] << " ";
	}
	return 0;
}
