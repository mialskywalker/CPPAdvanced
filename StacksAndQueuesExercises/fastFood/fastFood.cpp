#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include <queue>

using namespace std;

int main()
{
	int foodQuantity;
	cin >> foodQuantity;
	cin.ignore();

	queue<int> customers;

	string line;
	getline(cin, line);
	istringstream iss(line);

	int biggestOrder = INT_MIN;
	int num;
	while (iss >> num) {
		customers.push(num);
		if (num > biggestOrder)
			biggestOrder = num;
	}
	cout << biggestOrder << endl;

	while (customers.size()) {
		int food = customers.front();
		if (foodQuantity >= food) {
			foodQuantity -= food;
			customers.pop();
		}
		else
			break;
	}

	if (!customers.size()) {
		cout << "Orders complete" << endl;
	}
	else {
		cout << "Orders left: ";
		while (customers.size()) {
			int food = customers.front();
			customers.pop();
			cout << food << " ";
		}
		cout << endl;
	}
}