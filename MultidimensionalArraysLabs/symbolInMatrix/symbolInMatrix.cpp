#include <iostream>

using namespace std;

int main()
{
	char matrix[100][100] = {};

	int n;
	cin >> n;
	cin.ignore();

	for (size_t col = 0; col < n; col++)
	{
		string line;
		cin >> line;
		for (size_t row = 0; row < n; row++)
		{
			matrix[col][row] = line[row];
		}
	}

	char toFind;
	cin >> toFind;
	bool isFound = false;
	for (size_t col = 0; col < n; col++)
	{
		if (isFound) {
			break;
		}
		for (size_t row = 0; row < n; row++)
		{
			if (toFind == matrix[col][row]) {
				isFound = true;
				cout << "(" << col << ", " << row << ")" << endl;
				break;
			}
		}
	}

	if (!isFound)
		cout << toFind << " does not occur in the matrix" << endl;
}