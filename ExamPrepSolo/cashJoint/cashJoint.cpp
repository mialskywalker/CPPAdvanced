#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, double> wallet;
	vector<string> order;

	string command;
	cin >> command;

	while (command != "END") {
		double value;
		cin >> value;

		wallet[command] = value;
		order.push_back(command);


		cin >> command;
	}

	cin >> command;

	while (command != "END") {

		if (command == "P") {
			cout.setf(ios::fixed);
			cout.precision(2);
			for (string val : order) {
				cout << val << ": " << wallet[val] << endl;
			}
		}
		else if (command == "X") {
			string currency1, currency2;
			double value1, value2;

			cin >> currency1 >> value1 >> currency2 >> value2;
			wallet[currency1] -= value1;
			wallet[currency2] += value1 * value2;
		}
		else if (command == "+") {
			string currency;
			double valueToAdd;
			cin >> currency >> valueToAdd;

			wallet[currency] += valueToAdd;
		}
		else if (command == "-") {
			string currency;
			double valueToSubtract;
			cin >> currency >> valueToSubtract;

			wallet[currency] -= valueToSubtract;
		}
		else if (command == "E") {
			break;
		}

		cin >> command;
	}	
}