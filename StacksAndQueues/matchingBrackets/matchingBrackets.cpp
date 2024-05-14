#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
	string line;
	getline(cin, line);

	stack<int> open;

	for (size_t i = 0; i < line.length(); i++)
	{
		char character;
		character = line[i];
		if (character == '(') {
			open.push(i);
		}
		else if (character == ')') {
			int first = open.top();
			open.pop();
			cout << line.substr(first, i - first + 1) << endl;
		}
	}
	
}