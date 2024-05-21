#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<string, vector<double>> students;

	while (n--) {
		string name;
		double grade;
		cin >> name >> grade;
		students[name].push_back(grade);
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	for (pair<string, vector<double>> element : students) {
		cout << element.first << " -> ";
		double average = 0;
		for (int i = 0; i < element.second.size(); i++) {
			cout << element.second[i] << " ";
			average += element.second[i];
		}
		average /= element.second.size();
		cout << "(avg: " << average << ")" << endl;
	}
}