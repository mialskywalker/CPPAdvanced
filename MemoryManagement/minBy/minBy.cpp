#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>
#include <memory>

using namespace std;

unique_ptr<vector<string>> split(string s, char separator) {
	unique_ptr<vector<string>> strings(new vector<string>());

	ostringstream current;
	for (char c : s) {
		if (c == separator) {
			strings->push_back(current.str());

			current.str("");
			current.clear();
		}
		else {
			current << c;
		}
	}

	if (current.str().length())
		strings->push_back(current.str());

	return strings;
}

string getEarliestLexicographically(unique_ptr<vector<string>> & s) {

	string earliest;

	sort(s->begin(), s->end());
	earliest = *s->begin();

	return earliest;
}

string getShortestString(unique_ptr<vector<string>> & s) {

	string shortest;
	int minLen = INT_MAX;

	for (auto it = s->begin(); it != s->end(); it++) {
		if (it->length() < minLen) {
			minLen = it->length();
			shortest = *it;
		}
	}

	return shortest;
}

string getLongestString(unique_ptr<vector<string>> & s) {

	string longest;
	int maxLen = 0;

	for (auto it = s->begin(); it != s->end(); it++) {
		if (it->length() > maxLen) {
			maxLen = it->length();
			longest = *it;
		}
	}

	return longest;
}

int main()
{
	string input;
	getline(cin, input);

	unique_ptr<vector<string>> str = split(input, ' ');

	int command;
	cin >> command;

	switch (command)
	{
	case 1:
		cout << getEarliestLexicographically(str);
		break;
	case 2:
		cout << getShortestString(str);
		break;
	case 3:
		cout << getLongestString(str);
		break;
	}

	

}