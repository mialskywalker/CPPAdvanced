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
	cout << primaryDiagonal << endl;
}