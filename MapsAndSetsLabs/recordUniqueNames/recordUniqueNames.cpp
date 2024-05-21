#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<string> names;
	vector<string> order;

	while (n--) {
		string name;
		cin >> name;
		if (names.find(name) == names.end()) {
			order.push_back(name);
		}
		names.insert(name);
	}

	for (string name : order) {
		cout << name << endl;
	}
}