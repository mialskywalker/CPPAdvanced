#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	map<string, vector<int>> schoolRooms;

	string name;
	cin >> name;

	while (name != "END") {

		int roomNum;
		cin >> roomNum;

		schoolRooms[name].push_back(roomNum);

		cin >> name;
	}

	cin >> name;

	while (name != "END") {
		
		if (schoolRooms.find(name) != schoolRooms.end()) {
			cout << name << ": ";
			sort(schoolRooms.find(name)->second.begin(), schoolRooms.find(name)->second.end());
			for (int r : schoolRooms.find(name)->second) {
				cout << r << ' ';
			}
			cout << endl;
		}
		else {
			cout << name << ": Not found!" << endl;
		}

		cin >> name;
	}

}