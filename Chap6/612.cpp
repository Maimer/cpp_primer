#include <iostream>

using namespace std;

void swap(int &i, int &j)
{
	int k = i;
	i = j, j = k;
}

int main()
{
	int i, j;

	while (cin >> i >> j) {
		if (i != 0 && j != 0) {
			swap(i, j);
			cout << i << " " << j << endl;
		}
		else {
			break;
		}
	}
	return 0;
}