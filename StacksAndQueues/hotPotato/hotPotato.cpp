#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream istr(line);
	int n;
	cin >> n;

	queue<string> players;

	string name;
	while (istr >> name) {
		players.push(name);
	}

	int itr = n;
	while (players.size() > 1) {
		name = players.front();
		players.pop();
		itr--;
		if (itr > 0) {
			players.push(name);
		}
		else {
			cout << "Removed " << name << endl;
			itr = n;
		}
		
	}
	cout << "Last is " << players.front() << endl;
}