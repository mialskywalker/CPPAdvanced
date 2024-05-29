#include <iostream>

using namespace std;

int main()
{
	int matrix[100][100] = {};
	int R, C;
	cin >> R >> C;

	for (size_t row = 0; row < R; row++)
	{
		for (size_t col = 0; col < C; col++)
		{
			cin >> matrix[col][row];
		}
	}

	int n;
	cin >> n;

	bool isFound = false;
	for (size_t row = 0; row < R; row++)
	{
		for (size_t col = 0; col < C; col++)
		{
			if (matrix[col][row] == n) {
				isFound = true;
				cout << row << ' ' << col << endl;
			}
		}
	}

	if (!isFound)
		cout << "not found" << endl;
}