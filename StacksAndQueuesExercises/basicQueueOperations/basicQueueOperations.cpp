#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include <queue>

using namespace std;

int main()
{
	int N, S, X;
	cin >> N >> S >> X;

	queue<int> st;

	for (size_t i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		st.push(num);
	}

	if (S <= st.size()) {
		while (S--)
			st.pop();
	}

	int minElement = INT_MAX;

	if (st.size() == 0)
		minElement = 0;

	while (st.size()) {
		int num = st.front();
		st.pop();

		if (num == X) {
			cout << "true" << endl;
			return 0;
		}
		else if (num < minElement)
			minElement = num;
	}

	cout << minElement << endl;
}