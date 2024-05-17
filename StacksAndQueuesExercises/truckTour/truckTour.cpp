#include <iostream>
#include <sstream>
#include <string>
#include <queue>

using namespace std;

bool FullCircle(queue<int> liters, queue<int> distance) {
	int fuel = 0;

	while (liters.size()) {
		int curFuel = liters.front();
		fuel += curFuel;
		if (fuel >= distance.front()) {
			fuel -= distance.front();
		}
		else
			break;

		liters.pop();
		distance.pop();
	}

	return liters.size() == 0;
}

int main()
{
	int n;
	cin >> n;

	queue<int> liters;
	queue<int> distance;

	while (n--) {
		int curLit, curDis;
		cin >> curLit >> curDis;
		liters.push(curLit);
		distance.push(curDis);
	}

	n = 0;

	while (n <= liters.size()) {
		if (FullCircle(liters, distance)) {
			break;
		}

		n++;
		liters.push(liters.front()); liters.pop();
		distance.push(distance.front()); distance.pop();
	}

	cout << n << endl;
}