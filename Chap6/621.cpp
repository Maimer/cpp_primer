#include <iostream>

using namespace std;

void swap(int i, int *j)
{
	int temp = i;
	i = *j;
	*j = temp;
}

int main()
{
	int n1, n2;

	while (cin >> n1 >> n2) {
		int *p = &n2;
		swap(n1, *p);
		cout << n1 << " " << n2 << endl;
	}
	return 0;
}