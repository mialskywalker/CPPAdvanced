#include <iostream>
#include <set>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream istr(line);
	multiset<int, greater<int>> numbers;

	int num;
	while (istr >> num) {
		double x = sqrt(num);
		if (x * x == num) {
			numbers.insert(num);
		}
	}

	for (int n : numbers) {
		cout << n << " ";
	}
	
	cout << endl;

}