#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	vector<string> text;
	set<string> words;

	istringstream istr(line);
	string word;

	while (istr >> word) {
		text.push_back(word);
	}

	char letter;
	cin >> letter;
	
	for (string w : text) {
		for (char c : w) {
			if (c == letter) {
				words.insert(w);
			}
		}
	}

	for (string s : words) {
		int word = 0;
		for (char c : s) {
			if (c == '.' && word <= 0) {
				cout << s.substr(0, s.length() - 1) << ' ';
				word++;
			}
			else{
				if (word <= 0) {
					cout << s << ' ';
					word++;
				}
			}
		}
	}
}



//You are given a text in English. Let's define a word as any sequence of alphabetical characters. Each of those characters we'll call a letter, but we will consider the uppercase and lowercase variant of a character in a word as the same letter.
//a
//Y
//h
//.