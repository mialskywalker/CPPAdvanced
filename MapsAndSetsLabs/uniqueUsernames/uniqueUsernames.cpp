#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<string> usernames;

	while (n--) {
		string user;
		cin >> user;
		usernames.insert(user);
	}

	for (string user : usernames) {
		cout << user << endl;
	}
}