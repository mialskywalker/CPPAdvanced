#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);

	stack<int> numbers;
	stack<char> operations;

	int num;
	while (istr >> num) {
		numbers.push(num);

		char op;
		if (istr >> op)
			operations.push(op);
		else {
			break;
		}
	}

	int sum = 0;
	while (operations.size()) {
		char op; op = operations.top();
		operations.pop();
		int num; num = numbers.top();
		numbers.pop();

		switch (op)
		{
		case '+':
			sum += num;
			break;
		case '-':
			sum -= num;
			break;
		}
	}
	sum += numbers.top();
	cout << sum << endl;
}