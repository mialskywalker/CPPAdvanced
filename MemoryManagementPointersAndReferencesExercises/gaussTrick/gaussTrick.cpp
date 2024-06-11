#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const size_t MAX_NUMBERS = 1000;

int main()
{
	int * numbers = new int[MAX_NUMBERS];

	string line;
	getline(cin, line);

	istringstream istr(line);
	int num = 0;

	int counter = 0;
	while (istr >> num)
		numbers[counter++] = num;

	int i = 0;
	for (; i < counter / 2; i++) {
		cout << numbers[i] + numbers[counter-1-i] << ' ';
	}
	
	if (counter % 2 != 0)
		cout << numbers[i];
	cout << endl;

	delete [] numbers;
}