#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>

using namespace std;

int main()
{

	char matrix[100][100] = {};
	map<char, int> stars;
	vector<int> colsNum;
	int rows = 0, cols = 0;
	int numberOfStars = 0, planets = 0, asteroids = 0;
	int input = 0;

	string line;	
	getline(cin, line);

	while (line != "end") {
		cols = line.length();
		colsNum.push_back(cols);

		for (size_t i = 0; i < line.length(); i++)
		{
			char symbol = line[i];
			
			if (symbol == 'O' || symbol == 'B' || symbol == 'A' || symbol == 'F'
				|| symbol == 'G' || symbol == 'K' || symbol == 'M' ||
				symbol == 'L' || symbol == 'T' || symbol == 'Y') {
			
				stars[symbol]++;
				numberOfStars++;
				matrix[rows][i] = symbol;
				input++;
			}
			else if (isdigit(symbol)) {
				planets += symbol - '0';
				matrix[rows][i] = symbol;
				input++;
			}
			else if (symbol == '#' || symbol == '$') {
				asteroids++;
				matrix[rows][i] = symbol;
				input++;
			}
			else if (symbol == '.') {
				matrix[rows][i] = symbol;
				input++;
			}			
			
		}
		rows++;
		getline(cin, line);
	}

	getline(cin, line);

	cout << "Stars: " << numberOfStars << endl;
	if (numberOfStars > 0) {
		for (pair<char, int> s : stars) {
			cout << "- " << s.first << ": " << s.second << endl;
		}
	}
	cout << "Planets: " << planets << endl;
	cout << "Asteroids/comets: " << asteroids << endl;

	int idx = 0;
	for (int x : colsNum) {
		for (size_t i = 0; i < line.length(); i++)
		{
			char symbol = line[i];
			for (size_t col = 0; col < x; col++)
			{
				if (matrix[idx][col] == symbol)
					matrix[idx][col] = '+';
			}

		}

		for (size_t cols = 0; cols < x; cols++)
		{
			cout << matrix[idx][cols];
		}
		cout << endl;
		idx++;
	}

	

	
}

//O.B
//O.B.B
//O.O.B.B
//end
//A