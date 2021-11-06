#include "vector.hpp"

int main()
{
	int n=6;
	int x = 3;
	int y = 20;
	vector<int> v1;
	vector <string> niz;
	//vector<int> v2;
	//vector<int> v3;
	unos(v1, n);
	//unos(v2, n);
	//vector<int> v;
	//cout << "Unesite broj elemenata vektora " << endl;
	//cin >> n;
	//unos1(v, x, y);
	//int t = v1.size()+2;
	//cout << "Elementi vektora su " << endl;
	//novi(v1, v2, v3);
	//sortiraj(v1);
	//int s = v3.size();
	cout << "Koji element niza zelite ukloniti?\n" << endl;
	int i;
	cin >> i;
	//cout << "\n" << endl;
	ukloni(v1, i);
	int t = v1.size();
	print(v1, t);
	//string s = "popokatepetl";
	//string p = "po";
	//int br = podst(s, p);
	//cout << "Broj pojavljivanja podstringa je: " << br << endl;
	//rev_sort(niz);
	return 0;
}