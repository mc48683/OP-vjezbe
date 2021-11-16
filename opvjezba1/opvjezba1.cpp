

//#include <iostream>
//#include <iomanip>
//#include <time.h>
//#include <string>
//#include <vector>

int main()
{
	int a, b, s;
	std::cout << "unesi dva broja" << std::endl;
	std::cin >> a >> b;
	s = a + b;
	std::cout << "suma je " << s << std::endl;
}
*/

//1.ZADATAK

int main()
{
	bool flag;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::boolalpha << flag << std::endl;
	int a = 255;
	std::cout << "hex " << std::hex << a << std::endl;
	std::cout << "dec " << std::dec << a << std::endl;
	std::cout << "oct " << std::oct << a << std::endl;
	double pi = 3.141592;
	std::cout << "pi = " << std::scientific << std::uppercase;
	std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0'
	);
	std::cout << pi << std::endl;
}
//2. ZADATAK

struct matrix
{
	int m;
	int n;
	float** mat;
};

matrix unos(matrix m1)
{
	int i, j;
	m1.mat = new float* [m1.m];
	for (i = 0; i < m1.m; i++)
		m1.mat[i] = new float[m1.n];
	std::cout << "Unesite elemente matrice" << std::endl;
	for (i = 0; i < m1.m; i++)
	{
		for (j = 0; j < m1.n; j++)

		{
			std::cin >> m1.mat[i][j];
		}
		std::cout << std::endl;
	}
	for (i = 0; i < m1.m; ++i)
	{
		for (j = 0; j < m1.n; ++j)
			std::cout << m1.mat[i][j] << "  ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return m1;
}

matrix gen(matrix m1)
{
	int i, j;
	float a, b;
	std::cout << "Unesite raspon elemenata matrice " << std::endl;
	std::cin >> a >> b;
	srand(time(NULL));
	a = a * 1000;
	b = b * 1000;
	for (i = 0; i < m1.m; ++i)
	{
		for (j = 0; j < m1.n; ++j)
		{
			m1.mat[i][j] = ((float)a + rand() % (int)(b - a + 1)) / 1000;
		}

		for (i = 0; i < m1.m; ++i)
		{
			for (j = 0; j < m1.n; ++j)
			{
				std::cout << m1.mat[i][j] << "  ";
			}
			std::cout << std::endl;
		}
		return m1;
	}
}

float zbrajanje(matrix m1, matrix m2)
{
	int i, j;
	float nova[1500][15];
	for (i = 0;i < m1.m;++i)
	{
		for (j = 0;j < m1.n;++j)
		{
			nova[i][j] = m1.mat[i][j] + m2.mat[i][j];
		}
	}
	for (i = 0;i < m1.m;++i)
	{
		for (j = 0;j < m1.n;++j)
		{
			std::cout << nova[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	return nova[15][15];
}

float oduzimanje(matrix m1, matrix m2)
{
	int i, j;
	float nova[15][15];
	for (i = 0;i < m1.m;++i)
	{
		for (j = 0;j < m1.n;++j)
		{
			nova[i][j] = m1.mat[i][j] - m2.mat[i][j];
		}
	}
	for (i = 0;i < m1.m;++i)
	{
		for (j = 0;j < m1.n;++j)
		{
			std::cout << nova[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	return nova[15][15];
}

void mnozenje(matrix m1, matrix m2)
{
	float nova[15][15];
	int i, j, k;
	for (i = 0; i < m1.m; i++)
	{
		for (j = 0; j < m2.n; j++)
		{
			nova[i][j] = 0;
			for (k = 0; k < m2.m; k++)
			{
				nova[i][j] += m1.mat[i][k] * m2.mat[k][j];
			}

			std::cout << nova[i][j] << "  ";
		}

		std::cout << std::endl;
	}
}

void transp(matrix m1)
{
	int i, j;
	float nova[15][15];
	for (i = 0; i < m1.m; ++i)
	{
		for (j = 0; j < m1.n; ++j)
		{
			nova[j][i] = m1.mat[i][j];
		}
	}
	for (i = 0; i < m1.n; ++i)
	{
		for (j = 0; j < m1.m; ++j)
		{
			std::cout << nova[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

void print(matrix m1)
{

	int i, j;
	for (i = 0; i < m1.m; ++i)
	{
		for (j = 0; j < m1.n; ++j)
		{
			std::cout << std::right << std::setw(10) << std::fixed << std::setprecision(4) << m1.mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

}



int main()
{
	matrix m1;
	matrix m2;
	//std::cout << "Unesi broj redaka i stupaca matrice " << std::endl;
	//std::cin >> m1.m >> m1.n;
	//m2.m = m1.m;
	//m2.n = m1.n;
	//m1 = unos(m1);
	//m2 = unos(m2);

	std::cout << "Unesi broj redaka i stupaca prve matrice" << std::endl;
	std::cin >> m1.m >> m1.n;
	m1 = unos(m1);
	//gen(m1);
	std::cout << "Unesi broj redaka i stupaca druge matrice" << std::endl;
	std::cin >> m2.m >> m2.n;
	//while (m1.n != m2.m)
	//{
	//	std::cout << "Broj stupaca prve matrice je razlicit od broja redaka druge matrice" << std::endl;
	//	std::cout << "Unesi broj redaka i stupaca druge matrice" << std::endl;
	//	std::cin >> m2.m >> m2.n;
	//}
	//m1 = unos(m1);
	m2 = unos(m2);
	//zbrajanje(m1, m2);
	//oduzimanje(m1, m2);
	//mnozenje(m1, m2);
	//m1 = unos(m1);
	//transp(m1);
	//m1 = unos(m1);
	//print(m1);
	return 0;
}


// 3. ZADATAK

void max_min(int niz[], int* max, int* min,int size)
{
	int i, j;
	*max = niz[0];
	*min = niz[0];
	for (i = 0;i < size;++i)
	{
		if (niz[i] > *max)
		*max = niz[i];
		if (niz[i] < *min)
		*min = niz[i];
	}
}
int main()
{
	int max, min;
	int niz[] = { 1,5,8,-2,13 };
	int size = sizeof(niz) / sizeof(niz[0]);
	max_min(niz, &max, &min,size);
	std::cout << "Najveci broj je " << max << std::endl;
	std::cout << "Najmanji broj je " << min << std::endl;
	return 0;
}

// 4. ZADATAK

void max_min(int niz[], int* min, int* max, int n)
{
	if (n == 0)
		return;
	else
	{
		if (niz[n - 1] > *max)
		{
			*max = niz[n - 1];
		}
		else if (niz[n - 1] < *min)
		{
			*min = niz[n - 1];
		}
	}
	return  max_min(niz, min, max, n - 1);
}

int main()
{
	int niz[] = { 1, 27, 8, -2, 12};
	int min,max = niz[0];
	int n = sizeof(niz) / sizeof(niz[0]);
	max_min(niz, &min, &max, n);
	std::cout << "Najveci broj je " << max << std::endl;
	std::cout << "Najmanji broj je " << min << std::endl;
	return 0;
}

