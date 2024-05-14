#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream istr(line);
	queue<int> numbers;

	int num;
	while (istr >> num) {
		numbers.push(num);
	}

	bool isFirst = true;
	while(numbers.size())
	{
		int n;
		n = numbers.front();
		numbers.pop();

		if (n % 2 == 0) {
			if (!isFirst)
				cout << ", ";
			
			else
				isFirst = false;
			
			cout << n;
		}
			
	}

}