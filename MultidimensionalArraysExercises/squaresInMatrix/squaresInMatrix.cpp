#include <iostream>

using namespace std;

int main()
{
	char matrix[100][100] = {};

	int rows, cols;
	cin >> rows >> cols;

	for (size_t row = 0; row < rows; row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			cin >> matrix[row][col];
		}
	}
	
	int squareMatrices = 0;

	for (size_t row = 0; row < rows - 1; row++)
	{
		for (size_t col = 0;  col < cols - 1;  col++)
		{
			if (matrix[row][col] == matrix[row][col + 1] && matrix[row][col] == matrix[row + 1][col] && matrix[row][col] == matrix[row + 1][col + 1])
				squareMatrices++;
			
		}
	}
	cout << squareMatrices;
}