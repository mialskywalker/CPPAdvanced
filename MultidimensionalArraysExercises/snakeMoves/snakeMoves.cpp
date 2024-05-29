#include <iostream>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	char matrix[12][12] = {};

	string line;
	cin >> line;
	int maxIdx = line.length();
	int idx = 0;

	for (size_t row = 0; row < rows; row++)
	{
		if (row % 2 == 0) {
			for (size_t col = 0; col < cols; col++)
			{
				if (idx == maxIdx)
					idx = 0;
				matrix[row][col] = line[idx];
				idx++;
			}
		}
		else {
			for (int col = cols-1; col >= 0; col--)
			{
				if (idx == maxIdx)
					idx = 0;
				matrix[row][col] = line[idx];
				idx++;
			}
		}		
	}

	for (size_t row = 0; row < rows; row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			cout << matrix[row][col];
		}
		cout << endl;
	}
}