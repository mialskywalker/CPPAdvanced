#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream iss(line);

	stack<int> st;
	
	int num;
	while (iss >> num)
		st.push(num);

	int capacity;
	cin >> capacity;

	int racks = 1;
	int currentCapacity = capacity;

	while (st.size()) {
		int clothes = st.top();
		st.pop();

		if (currentCapacity >= clothes)
			currentCapacity -= clothes;
		else {
			currentCapacity = capacity;
			currentCapacity -= clothes;
			racks++;
		}

	}
	cout << racks << endl;
}