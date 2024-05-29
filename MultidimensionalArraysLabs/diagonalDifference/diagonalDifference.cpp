#include <iostream>

using namespace std;

int main()
{
	int matrix[100][100] = {};

	int n;
	cin >> n;

	for (size_t col = 0; col < n; col++)
	{
		for (size_t row = 0; row < n; row++)
		{
			cin >> matrix[col][row];
		}
	}

	int primaryDiagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		primaryDiagonal += matrix[i][i];
	}

	int secondaryDiagonal = 0;
	int rows = n - 1;
	for (size_t i = 0; i < n; i++)
	{
		secondaryDiagonal += matrix[i][rows];
		rows--;
	}

	int difference = primaryDiagonal - secondaryDiagonal;
	cout << abs(difference) << endl;
}