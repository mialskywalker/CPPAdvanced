#include <iostream>
#include <map>
#include <memory>
#include <string>

using namespace std;

//map<int, string> addToMap() {
//	map<int, string> companies;
//
//	string command;
//	cin >> command;
//
//	while (command != "end") {
//		int id = stoi(command);
//		string name;
//		cin >> name;
//
//		if (id >= 0) {
//			//companies.insert(pair<int, string>(id, name));
//		}
//
//		cin >> command;
//	}
//}

int main()
{
	map<int, string> company;

	string command;
		cin >> command;
	
		while (command != "end") {
			int id = stoi(command);
			string name;
			cin >> name;
	
			if (id >= 0) {
				company.insert(pair<int, string>(id, name));
			}
	
			cin >> command;
		}

	for (auto it = company.begin(); it != company.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}

}