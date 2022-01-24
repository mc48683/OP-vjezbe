#include"header.hpp"
using namespace std;
int main()
{
	Stack<int> stack;
	stack.push(2);
	stack.push(11);
	stack.push(15);
	stack.push(7);
	stack.push(46);
	cout << "Popped element: " << stack.pop() << endl;
	cout << "Popped element: " << stack.pop();
	return 0;
}