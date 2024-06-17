#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int matrix[26][26] = {};
	set<string> indexes;
	map<string, int> maxOpt;
	int maxOptimization = INT_MIN;

	int interceptions;
	cin >> interceptions;

	int totalOpportunities = 0;

	for (size_t row = 0; row < interceptions; row++)
	{
		for (size_t col = 0; col < interceptions; col++)
		{
			cin >> matrix[row][col];
		}
	}

	cout << "  ";
	for (size_t i = 0; i < interceptions; i++)
	{
		if (i == interceptions - 1) {
			cout << char('A' + i);
		}
		else {
			cout << char('A' + i) << ' ';
		}
	}
	cout << endl;
	for (size_t row = 0; row < interceptions; row++)
	{
		cout << char('A' + row) << ' ';
		for (size_t col = 0; col < interceptions; col++)
		{
			if (col == interceptions - 1) {
				cout << matrix[row][col];
			}
			else {
				cout << matrix[row][col] << ' ';
			}
		}
		cout << endl;
	}

	string maxOptimizationString;

	for (size_t row = 0; row < interceptions; row++)
	{
		for (size_t col = 0; col < interceptions; col++)
		{
			int first = matrix[row][col];
			int second = matrix[col][row];
			if (first != second) {
				string asd1;
				string asd2;
				char ch1 = char('A' + row);
				char ch2 = char('A' + col);
				asd1 += ch1;
				asd1 += ch2;
				asd1 += ch2;
				asd1 += ch1;
				asd2 += ch2;
				asd2 += ch1;
				asd2 += ch1;
				asd2 += ch2;
				if (indexes.find(asd1) == indexes.end() && indexes.find(asd2) == indexes.end()) {
					
					indexes.insert(asd1);
					indexes.insert(asd2);
					cout << char('A' + row) << char('A' + col) << "(" << first << ")" << " - ";
					cout << char('A' + col) << char('A' + row) << "(" << second << ")" << endl;
					totalOpportunities += abs(first - second);
					if (abs(first - second) >= maxOptimization) {
						maxOptimization = abs(first - second);
						maxOptimizationString = asd1.substr(0, 2) + '-' + asd1.substr(2, 3);
						maxOpt[maxOptimizationString] = maxOptimization;
					}
				}	
				
			}
		}
	}

	cout << "Total opportunities: " << totalOpportunities << endl;
	if (maxOptimizationString.length() > 0) {
		cout << "Max optimization: " << maxOptimization << ": ";
		for (pair<string, int> s : maxOpt) {
			if (s.second == maxOptimization) {
				cout << s.first << ' ';
			}
		}
		cout << endl;
	}
	else {
		cout << "Max optimization: none";
	}

}