#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	string text;	
	for (size_t i = 0; i < line.length(); i++)
	{
		text += tolower(line[i]);
	}

	map<string, unsigned> shortWords;

	istringstream istr(text);
	string word;

	while (istr >> word) {
		if (word.length() < 5) {
			if (shortWords.find(word) == shortWords.end()) {
				shortWords[word] = 1;
			}
		}
	}

	bool bFirst = true;
	for (auto i = shortWords.begin(); i != shortWords.end(); i++) {
		if (bFirst) {
			cout << i->first;
			bFirst = false;
		}
		else {
			cout << ", " << i->first;
		}
	}
	cout << endl;
}