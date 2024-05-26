#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);
	map<double, less<double>> numbers;

	double num;
	while (istr >> num) {
		numbers[num];
	}

	bool bFirst = true;
	for (auto i = numbers.begin(); i != numbers.end(); i++) {
		if (bFirst) {
			cout << i->first;
			bFirst = false;
		}
		else {
			cout << " <= " << i->first;
		}
	}
	cout << endl;
}