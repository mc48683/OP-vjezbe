#include "header.hpp"

int main()
{
	ifstream file;
	try 
	{
		file.open("numbers.txt");
		read(file);
	}

	catch (string errorname) {
		cout << errorname << endl;
		return 1;
	}
}