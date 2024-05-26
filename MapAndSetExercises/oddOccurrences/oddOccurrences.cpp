#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);
	map<string, unsigned> words;
	vector<string> order;

	string text;
	while (istr >> text) {
		string lower;
		for (auto x : text)
			lower += tolower(x);

		if (words.find(lower) == words.end())
			order.push_back(lower);
		words[lower]++;
	}
	bool bFirst = true;
	for (string val : order) {
		if (words[val] % 2 != 0) {
			if (bFirst) {
				cout << val;
				bFirst = false;
			}
			else {
				cout << ", " << val;
			}
		}
	}
}