#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	stack<string> flowA;
	queue<string> flowB;

	string fishName;
	cin >> fishName;

	while (fishName != "end") {

		char flow;
		cin >> flow;

		if (flow == 'A') {
			flowA.push(fishName);
		}
		else if (flow == 'B') {
			flowB.push(fishName);
		}

		cin >> fishName;
	}
	bool bFirst = true;
	cout << "Flow A: " << endl;
	if (flowA.size() > 0) {
		while (flowA.size()) {
			string name = flowA.top();
			flowA.pop();
			if (bFirst) {
				cout << name;
				bFirst = false;
			}
			else
				cout << ", " << name;
		}
	}
	else {
		cout << "<EMPTY>";
	}
	cout << endl << "Flow B: " << endl;
	if (flowB.size() > 0) {
		bFirst = true;
		while (flowB.size()) {
			string name = flowB.front();
			flowB.pop();
			if (bFirst) {
				cout << name;
				bFirst = false;
			}
			else
				cout << ", " << name;
		}
		cout << endl;
	}
	else {
		cout << "<EMPTY>";
	}
}