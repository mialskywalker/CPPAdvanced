#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

int main()
{
	string name;
	queue<string> customers;
	
	while (true) {
		cin >> name;
		if (name == "End") {
			break;
		}
		else if (name == "Paid") {
			while (customers.size()) {
				cout << customers.front() << endl;
				customers.pop();
			}
		}
		else {
			customers.push(name);
		}
	}

	if (customers.size())
		cout << customers.size() << " people remaining.";
}