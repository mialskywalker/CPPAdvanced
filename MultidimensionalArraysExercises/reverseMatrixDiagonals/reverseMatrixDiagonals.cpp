#include <iostream>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	int matrix[100][100] = {};

	for (size_t row = 0; row < rows; row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			cin >> matrix[row][col];
		}
	}

	for (int col = cols-1; col >= 0; col--)
	{
		int printRow = rows;

		for (int printCol = col; printCol <= cols - 1 && printRow > 0; printCol++)
		{
			if (printRow > 0) {
				cout << matrix[printRow - 1][printCol] << ' ';
				printRow--;
			}
		}
		cout << endl;
	}

	if (rows >= 2) {
		for (int row = rows-2; row >= 0; row--)
		{
			int printRow = row;

			for (int col = 0; col <= row && col < cols; col++)
			{
				cout << matrix[printRow][col] << ' ';
				printRow--;
			}
			cout << endl;
		}
	}
}