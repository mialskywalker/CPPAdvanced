#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, unsigned> resources;
	vector<string> order;

	while (1) {
		string resource;
		int quantity;
		cin >> resource;
		if (resource == "stop") {
			break;
		}

		cin >> quantity;

		if (resources.find(resource) == resources.end()) {
			order.push_back(resource);
		}
		resources[resource] += quantity;
	}

	for (string v : order) {
		cout << v << " -> " << resources[v]<< endl;
	}
}