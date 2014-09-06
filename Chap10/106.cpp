#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v1;
	int i;

	while (cin >> i) {
		if (i != 0) {
			v1.push_back(i);
		}
		else {
			break;
		}
	}

	for (auto i : v1) {
		cout << i << " ";
	}

	cout << endl;

	fill_n(v1.begin(), v1.size(), 0);

	for (auto i : v1) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}