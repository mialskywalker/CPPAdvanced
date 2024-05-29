#include <iostream>

using namespace std;

int main()
{
	int matrix[100][100] = {};

	int columns, rows;
	cin >> columns >> rows;

	for (size_t col = 0; col < columns; col++)
	{
		for (size_t row = 0; row < rows; row++)
		{
			cin >> matrix[col][row];
		}
	}

	for (size_t row = 0; row < rows; row++)
	{
		int res = 0;
		for (size_t col = 0; col < columns; col++)
		{
			res += matrix[col][row];
		}
		cout << res << endl;
	}
}