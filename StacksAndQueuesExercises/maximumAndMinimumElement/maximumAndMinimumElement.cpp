#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include <stack>

using namespace std;

int PrintMinElement(stack<int> st) {
	int minEl = INT_MAX;
	while (st.size()) {
		int el = st.top();
		st.pop();
		if (el < minEl)
			minEl = el;
	}
	return minEl;
}

int PrintMaxElement(stack<int> st) {
	int maxEl = INT_MIN;
	while (st.size()) {
		int el = st.top();
		st.pop();
		if (el > maxEl)
			maxEl = el;
	}
	return maxEl;
}

int main()
{
	int n;
	cin >> n;

	stack<int> st;

	while (n--) {
		int command;
		cin >> command;

		switch (command)
		{
		case 1:
			int num;
			cin >> num;
			st.push(num);
			break;
		case 2:
			if (st.size())
				st.pop();
			break;
		case 3:
			if (st.size())
				cout << PrintMaxElement(st) << endl;
			break;
		case 4:
			if (st.size())
				cout << PrintMinElement(st) << endl;
			break;
		default:
			break;
		}
	}

	if (st.size()) {
		bool bFirst = true;

		while (st.size()) {
			if (bFirst)
				bFirst = false;
			else
				cout << ", ";
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}