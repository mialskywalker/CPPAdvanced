#include <iostream>
#include <stack>
#include <string>
#include <map>

using namespace std;

void print(stack<string>& s, map<string, int>& total)
{
	while (!s.empty()) {
		if (s.size() == 1)
		{
			cout << s.top() << endl;
			if (total.find(s.top()) != total.end())
			{
				total[s.top()]++;
			}
			else {
				total[s.top()] = 1;
			}
			s.pop();
		}
		else {
			cout << s.top() << ", ";
			if (total.find(s.top()) != total.end())
			{
				total[s.top()]++;
			}
			else {
				total[s.top()] = 1;
			}
			s.pop();
		}
		
	}
}

stack<string> reverseStack(stack<string>& s) {
	stack<string> tempStack;
	while (!s.empty()) {
		tempStack.push(s.top());
		s.pop();
	}
	s = tempStack;
	return s;
}


int main()
{

	stack<string> bag1;
	stack<string> bag2;
	stack<string> bag3;

	string text;
	getline(cin, text);

	while (1) {
		if (text == "END")
			break;
		
		int pole = text[0] - '0';
		text = text.substr(2, text.length());
		
		switch (pole)
		{
		case 1:
			if (text == "THROW") {
				if (bag1.size() > 0)
					bag1.pop();
			}
			else
				bag1.push(text);
			break;
		case 2:
			if (text == "THROW") {
				if (bag2.size() > 0)
					bag2.pop();
			}
			else
				bag2.push(text);
			break;
		case 3:
			if (text == "THROW") {
				if (bag3.size() > 0)
					bag3.pop();
			}
			else
				bag3.push(text);
			break;
		}

		getline(cin, text);
	}

	map<string, int> inventory;

	cout << "1: ";
	if (bag1.size())
	{
		reverseStack(bag1);
		print(bag1, inventory);
	}
	else {
		cout << "<empty>" << endl;
	}

	cout << "2: ";
	if (bag2.size())
	{
		reverseStack(bag2);
		print(bag2, inventory);
	}
	else {
		cout << "<empty>" << endl;
	}

	cout << "3: ";
	if (bag3.size())
	{
		reverseStack(bag3);
		print(bag3, inventory);
	}
	else {
		cout << "<empty>" << endl;
	}

	getline(cin, text);

	map<string, int> restaurant;

	while (1) {
		if (text == "END")
			break;

		if (inventory.find(text) != inventory.end()) {
			restaurant[text] = inventory.find(text)->second;
			inventory.erase(text);
		}
		
		getline(cin, text);
	}

	cout << "Restaurant: ";
	bool bFirst = true;
	if (restaurant.size()) {
		for (auto it = restaurant.begin(); it != restaurant.end(); it++) {
			if (bFirst) {
				cout << it->first << ": " << it->second;
				bFirst = false;
			}
			else {
				cout << ", " << it->first << ": " << it->second;
			}
		}
	}
	else {
		cout << "<nothing>";
	}

	cout << endl << "Pate: ";
	if (inventory.size()) {
		bFirst = true;
		for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
			if (bFirst) {
				cout << iter->first << ": " << iter->second;
				bFirst = false;
			}
			else {
				cout << ", " << iter->first << ": " << iter->second;
			}
		}
		cout << endl;
	}
	else {
		cout << "<nothing>" << endl;
	}
	
}
