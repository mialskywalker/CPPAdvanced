#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<string, map<string, set<string>>> data;

	while (n--) {
		string continent, country, city;
		cin >> continent >> country >> city;

		data[continent][country].insert(city);
	}

	for (map<string, map<string, set<string>>>::iterator itContinents = data.begin(); itContinents != data.end(); itContinents++) {

		cout << itContinents->first << ":" << endl;

		map<string, set<string>>& countries = itContinents->second;

		for (map<string, set<string>>::iterator itCountries = countries.begin(); itCountries != countries.end(); itCountries++) {
			cout << "  " << itCountries->first << " -> ";

			set<string>& cities = itCountries->second;

			bool bFirst = false;
			for (string city : cities) {
				if (bFirst) {
					cout << ", ";
				}
				else {
					bFirst = true;
				}
				cout << city;
			}
			cout << endl;
		}
	}
}