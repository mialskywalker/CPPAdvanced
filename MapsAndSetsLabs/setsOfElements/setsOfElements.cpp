#include <iostream>
#include <set>

using namespace std;

void MakeSets(set<int>& data, int n) {
	while (n--) {
		int num;
		cin >> num;
		data.insert(num);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	set<int> N;
	set<int> M;
	MakeSets(N, n);
	MakeSets(M, m);

	for (int num : N) {
		if (M.find(num) != M.end()) {
			cout << num << " ";
		}
	}
}