#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int ReadMatrix(int matrix[10][10], int n) {

	int idx = 0;

	for (size_t col = 0; col < n; col++)
	{
		string line;
		getline(cin, line);
		istringstream istr(line);
		int num;
		idx = 0;
		while (istr >> num) {
			matrix[col][idx] = num;
			idx++;
		}
	}
	return idx;
}

bool CheckIfEqual(int matrixA[10][10], int matrixB[10][10], int n, int idx) {
	for (size_t col = 0; col < n; col++)
	{
		for (size_t row = 0; row < idx; row++)
		{
			if (matrixA[col][row] != matrixB[col][row])
				return false;
		}
	}
	return true;
}

int main()
{
	int matrix1[10][10] = {};
	int matrix2[10][10] = {};
	int n;
	int index;

	cin >> n;
	cin.ignore();
	index = ReadMatrix(matrix1, n);
	cin >> n;
	cin.ignore();
	ReadMatrix(matrix2, n);

	
	if (CheckIfEqual(matrix1, matrix2, n, index))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	
}