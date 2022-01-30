#include "header.hpp"

void print(vector<int>& v)
{
	for (int i = 0;i < v.size();++i)
	{
		cout << v[i] << " ";
	}
}

void read(ifstream& file)
{
	vector<int> numbers;
	if (!file)
	{
		throw string("File doesn't exist");
	}

	istream_iterator<int> begin(file);
	istream_iterator<int> end;
	copy(begin, end, back_inserter(numbers));


	int cnt = 0;
	for (int i = 0;i < numbers.size();++i)
	{
		if (numbers[i] > 500)
		{
			cnt++;
		}
	}
	cout << "Numbers greater than 500: " << cnt << endl;
	cout << "Smallest element: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "Largest element: " << *max_element(numbers.begin(), numbers.end()) << endl;

	vector<int>::iterator it;
	for (it = numbers.begin(); it != numbers.end();)
	{
		if (*it < 300)
		{
			it = numbers.erase(it);
		}
		else
		{
			++it;
		}
	}
	sort(numbers.begin(), numbers.end(), greater<int>());
	print(numbers);

}
