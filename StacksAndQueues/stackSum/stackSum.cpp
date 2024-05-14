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
	
	int curNum;
	while (istr >> curNum) {
		numbers.push(curNum);
	}

	while (true) {
		getline(cin, line);
		
		if (line == "end")
			break;

		istringstream istr(line);
		
		string command;
		istr >> command;

		if (command == "add") {
			int n1, n2;
			istr >> n1; istr >> n2;
			numbers.push(n1); numbers.push(n2);
		}
		else if (command == "remove") {
			int n;
			istr >> n;
			if (n <= numbers.size()) {
				while (n--)
					numbers.pop();
			}
		}
	}
	int sum = 0;

	while (numbers.size()) {
		int num;
		num = numbers.top();
		numbers.pop();
		sum += num;
	}
	cout << sum << endl;
}