#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);

	map<double, int> numbers;

	double num;
	while (istr >> num) {
		if (numbers.find(num) != numbers.end()) {
			numbers[num]++;
		}
		else {
			numbers[num] = 1;
		}
	}

	for (pair<double, int> number : numbers) {
		cout << number.first << " -> " << number.second << endl;
	}
}