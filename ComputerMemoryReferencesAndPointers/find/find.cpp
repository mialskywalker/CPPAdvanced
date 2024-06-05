#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	char buffer[5000];
	char * nextName = buffer;

	map<int, const char *> companies;

	string name;
	cin >> name;

	while (name != "end") {

		int id;
		cin >> id;

		strcpy(nextName, name.c_str());
		companies[id] = nextName;

		nextName += (strlen(nextName) + 1);

		cin >> name;
	}

	int toFind;
	cin >> toFind;

	auto result = companies.find(toFind);
	if (result == companies.end())
		cout << "[not found]" << endl;
	else {
		cout << result->second << ' ' << result->first << endl;
	}
	
}