#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	map<double, unsigned> occurrences;
	vector<double> order;

	istringstream istr(line);

	double current;
	while (istr >> current) {
		if (occurrences.find(current) == occurrences.end()) {
			order.push_back(current);
		}
		occurrences[current]++;
	}

	for (double val : order)
	{
		cout << val << " - " << occurrences[val] << " times" << endl;
	}
	
}