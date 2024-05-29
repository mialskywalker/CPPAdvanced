#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
	int matrix[100][100] = {};

	int rows, cols;
	cin >> rows >> cols;

	for (size_t row = 0; row < rows; row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			cin >> matrix[row][col];
		}
	}
	int maxSum = INT_MIN;
	vector<vector<int>> maxMatrix;

	for (size_t row = 0; row < rows - 2; row++)
	{
		int currentSum = 0;
		for (size_t col = 0; col < cols - 2; col++)
		{
			currentSum = matrix[row][col] + matrix[row][col + 1] + matrix[row][col + 2] +
						matrix[row+1][col] + matrix[row+1][col+1] + matrix[row+1][col+2] +
						matrix[row+2][col] + matrix[row+2][col+1] + matrix[row+2][col+2];
			if (currentSum > maxSum) {
				maxSum = currentSum;
				maxMatrix = {
					{ matrix[row][col], matrix[row][col + 1], matrix[row][col + 2] },
					{ matrix[row + 1][col], matrix[row + 1][col + 1], matrix[row + 1][col + 2] },
					{ matrix[row + 2][col], matrix[row + 2][col + 1], matrix[row + 2][col + 2] }
				};
			}
		}
	}
	cout << "Sum = " << maxSum << endl;
	
	for (size_t row = 0; row < 3; row++)
	{
		for (size_t col = 0; col < 3; col++)
		{
			cout << maxMatrix[row][col] << " ";
		}
		cout << endl;
	}
}