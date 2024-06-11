#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	
	char* lowerCase, * upperCase;

	lowerCase = new char[line.length() - 1];
	upperCase = new char[line.length() - 1];

	size_t i = 0;
	for (; i < line.length(); i++)
	{
		lowerCase[i] = ::tolower(line[i]);
		upperCase[i] = ::toupper(line[i]);
	}

	lowerCase[i] = '\0';
	upperCase[i] = '\0';

	cout << lowerCase << endl << upperCase << endl;

	delete[] upperCase;
	delete[] lowerCase;
}