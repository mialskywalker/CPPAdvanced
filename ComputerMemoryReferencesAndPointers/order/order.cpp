#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	char buffer[5000];
	char* nextName = buffer;

	map<int, const char*> companies;

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

	for (auto r = companies.begin(); r != companies.end(); r++)
	{
		cout << r->second << ' ' << r->first << endl;
	}
}