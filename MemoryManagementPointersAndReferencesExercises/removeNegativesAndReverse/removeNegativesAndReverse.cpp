#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const size_t MAX_SIZE = 1000;

int main()
{
	int* data = new int[MAX_SIZE];

	string line;
	getline(cin, line);

	istringstream istr(line);

	int counter = 0;
	int num = 0;
	while (istr >> num)
	{
		if (num >= 0) {
			data[counter] = num;
			counter++;
		}
	}

	if (counter > 0) {
		for (int i = counter-1; i >= 0; i--)
		{
			cout << data[i] << ' ';
		}
	}
	else {
		cout << "empty";
	}
	cout << endl;

	delete[] data;
}