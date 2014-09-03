#include <iostream>

using namespace std;

void swap(int *i, int *j)
{
	i = j, j = i;
}

int main()
{
	int i, j;

	while (cin >> i >> j) {
		if (i != 0 && j != 0) {
			int *p1 = &i, *p2 = &j;
			swap(*p1, *p2);
			cout << i << " " << j << endl;
		}
		else {
			break;
		}
	}
	return 0;
}