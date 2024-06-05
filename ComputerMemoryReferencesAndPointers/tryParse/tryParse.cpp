#include <iostream>
#include <cctype>

using namespace std;

bool TryParse(const char * data, int & number) {
	int ret = 0;
	while (*data != '\0') {
		if (isdigit(*data)) {
			ret *= 10;
			ret += *data - '0';
		}
		else
			return false;
		data++;
	}

	number = ret;
	return true;
}

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	bool first, second;
	int int1, int2;

	first = TryParse(str1.c_str(), int1);
	second = TryParse(str2.c_str(), int2);

	if (first && second) {
		cout << int1 + int2 << endl;
	}
	else {
		if (first)
			cout << int1 << endl << "[error] " << str2 << endl;
		else if (second)
			cout << "[error] " << str1 << endl << int2 << endl;
		else {
			cout << "[error] " << str1 << endl << "[error] " << str2 << endl;
		}
	}

}