#include <iostream>

using namespace std;

int main()
{
	int j, k;

	while (cin >> j) {
		if (j != 0) {
			k = i;
			int i = fact(j);
			cout << "The factorial of " << j << " equals " << i << endl;
		}
		else {
			break;
		}
	}
	return 0;
}

int fact(int val)
{
	int fac = 1;

	while (val > 1) {
		fac *= val--;
	}
	return fac;
}