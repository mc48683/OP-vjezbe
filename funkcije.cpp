#include "vector.hpp"

void unos(vector<int>& v, int n)
{
	int i, x;
	for (i = 0;i < n;++i)
	{
		cout << "Unesite element vektora " << endl;
		cin >> x;
		v.push_back(x);
	}
}

void unos1(vector<int>& v, int x, int y)
{
	int m;
	int size = 0;
	while (1)
	{
		cout << "Unesite element vektora " << endl;
		cin >> m;
		if (m < x || m > y)
			break;
		else
			v.push_back(m);
	}
}


void print(vector<int>& v, int n)
{
	int i;
	for (i = 0;i < n;++i)
	{
		cout << v.at(i) << endl;
	}
}



void novi(vector<int>& v1, vector<int>& v2, vector<int>& v3)
{
	int n = v1.size();
	int i;
	int br;
	for (i = 0;i < n;++i)
	{
		br = v1.at(i);
		if (count(v2.begin(), v2.end(), br) == 0)
		{
			v3.push_back(v1.at(i));
		}
	}
}


void sortiraj(vector<int>& v)
{
	int zbroj = 0;
	int i;
	int n = v.size();
	sort(v.begin(), v.end());
	for (i = 0;i < n;++i)
	{
		zbroj = zbroj + v.at(i);
	}
	v.insert(v.begin(), 0);
	v.push_back(zbroj);

}

void ukloni(vector<int>& v, int i)
{
	int n = v.size();
	v.at(i) = v.at(n - 1);
	v.pop_back();
}

int podst(string s, string p)
{
	int n = 0;
	//size_t npos = -1;
	size_t pos = 0;
	while ((pos = s.find(p, pos)) != string::npos)
	{
		++n;
		pos += p.length();
	}
	return n;
}


void rev_sort(vector <string>& niz)
{
	string str;
	vector<string>::iterator it;
	cout << "Ctrl+Z za prekid unosa" << endl;
	while (cin >> str)
	{
		niz.push_back(str);
	}
	for (it = niz.begin(); it != niz.end(); ++it)
	{
		reverse((*it).begin(), (*it).end());
	}
	sort(niz.begin(), niz.end());
	cout << "Stringovi su:" << endl;
	for (int i = 0; i < niz.size(); ++i)
	{
		cout << niz.at(i) << endl;
	}
}

