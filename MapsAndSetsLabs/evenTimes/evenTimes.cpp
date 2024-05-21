#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<int, int> numbers;

	while (n--) {
		int num;
		cin >> num;

		if (numbers.find(num) != numbers.end()) {
			numbers[num];
		}
		numbers[num]++;
	}

	for (map<int, int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		if (it->second % 2 == 0) {
			cout << it->first;
		}
	}
}