#include <iostream>

using namespace std;

int main()
{
	int * * matrix;

	int rows, cols;
	cin >> rows >> cols;

	matrix = new int * [rows];

	for (size_t cur = 0; cur < rows; cur++)
	{
		matrix[cur] = new int[cols];
	}

	for (size_t row = 0;  row < rows;  row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			cin >> matrix[row][col];
		}
	}

	int r, c;
	cin >> r >> c;

	for (size_t row = 0; row < r; row++)
	{
		for (size_t col = 0; col < c; col++)
		{
			cout << matrix[row][col] << ' ';
		}
		cout << endl;
	}

	for (size_t row = 0; row < rows; row++)
	{
		delete [] matrix[row];
	}
	delete [] matrix;

}