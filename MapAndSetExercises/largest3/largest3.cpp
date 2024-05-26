#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);
	set<double, greater<double>> numbers;

	double num;
	while (istr >> num) {
		numbers.insert(num);
	}

	if (numbers.size() < 3) {
		for (double n : numbers) {
			cout << n << " ";
		}
	}
	else {
		int count = 0;
		for (double n : numbers) {
			if (count >= 3) {
				break;
			}
			cout << n << " ";
			count++;
		}
	}
	cout << endl;
}