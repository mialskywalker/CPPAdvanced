#include <iostream>
#include <string>

using namespace std;

int main()
{
	int matrix[100][100] = {};

	string line;
	getline(cin, line);

	char command = line[line.length() - 1];
	
	string number;
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == ',')
			break;
		number += line[i];
	}
	int num = stoi(number);
	int n = 1;
	if (command == 'A') {
		for (size_t row = 0; row < num; row++)
		{
			for (size_t col = 0; col < num; col++)
			{
				matrix[col][row] = n;
				n++;
			}
		}
	}
	else if (command == 'B') {
		int idx = 0;
		for (size_t row = 0; row < num; row++)
		{
			if (row % 2 == 0) {
				for (size_t col = 0; col < num; col++)
				{
					if (idx == num)
						idx = 0;
					matrix[col][row] = n;
					n++;
					idx++;
				}
			}
			else {
				for (int col = num - 1; col >= 0; col--)
				{
					if (idx == num)
						idx = 0;
					matrix[col][row] = n;
					n++;
					idx++;
				}
			}
		}
	}

	for (size_t row = 0; row < num; row++)
	{
		for (size_t col = 0; col < num; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
}